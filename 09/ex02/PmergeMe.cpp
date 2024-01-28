/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PmergeMe.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/26 13:53:20 by arommers      #+#    #+#                 */
/*   Updated: 2024/01/28 15:23:49 by arommers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp" 

PmergeMe::PmergeMe() {}
PmergeMe::PmergeMe(const PmergeMe& rhs){}
PmergeMe::~PmergeMe() {}
const PmergeMe& PmergeMe::operator=(const PmergeMe& rhs) {return (*this = rhs);}


std::vector<int> PmergeMe::parseNumbers(const std::string& input)
{
    int num;
    std::vector<int>    numbers;
    std::istringstream  str(input);

    while (str >> num)
        numbers.push_back(num);
    return (numbers);
}

void    PmergeMe::pairUp(std::vector<int>& input, std::vector<int>& chainA, std::vector<int>& chainB)
{
    std::vector<std::vector<int> >   pairs;
    int value = 0;
    
    if (input.size() % 2 == 1)
    {
        value = input.back();
        input.pop_back();
    }
    
    for (int i = 0; i < input.size(); i += 2)
    {
        std::vector<int> currentPair = {input[i], input[i + 1]};
        std::sort(currentPair.begin(), currentPair.end());
        pairs.push_back(currentPair);
    }
    std::sort(pairs.begin(), pairs.end(), [](auto& a, auto& b)
    {
        return (a[1] < b[1]);
    });
    for (auto& pair : pairs)
    {
        chainA.push_back(pair[1]);
        chainB.push_back(pair[0]);
    }
    if (value != 0)
        chainB.push_back(value);
    std::cout << "last value in b: " << chainB.back() << std::endl;
}

void    PmergeMe::binaryInsert(std::vector<int>& chainA, int start, int len, int value)
{
    if (start >= len)
    {
        chainA.insert(chainA.begin() + start, value);
        return ;
    }

    int mid = start + (len - start) / 2;
    
    if (chainA[mid] < value)
        binaryInsert(chainA, mid + 1, len, value);
    else
        binaryInsert(chainA, start, mid, value);
}

int PmergeMe::jacobS(int n)
{
    if (n == 0)
        return (0);
    if (n == 1)
        return (1);
    
    int prev = 0;
    int current = 1;
    for (int i = 2; i < n; ++i)
    {
        int next = current + 2 *prev;
        prev = current;
        current = next;
    }
    return (current);
}

void    PmergeMe::insertSort(std::vector<int>& chainA, std::vector<int>& chainB)
{
    int i = 1;
    int n = 1;
    int len = chainB.size();
       
    chainA.insert(chainA.begin(), chainB.front());

    while (i < len)
    {
        for (int j = jacobS(n); j > 0 && j > jacobS(n - 1); --j)
        {
            auto it = chainB.begin();
            if (j >= len)
                j = len - 1;
            std::advance(it, j);
            binaryInsert(chainA, 0, chainA.size(), *it);
            ++i;
        }
        ++n;
    }
}

void    PmergeMe::sortVector(const std::string& input)
{
    std::vector<int>    numbers = parseNumbers(input);
    std::vector<int>    chainA;
    std::vector<int>    chainB;

    printVector(numbers);
    pairUp(numbers, chainA, chainB);
    insertSort(chainA, chainB);
    printVector(chainA);
}

void    PmergeMe::printVector(const std::vector<int>& input)
{
    std::cout << "Numbers: ";
    for (auto value : input)
        std::cout << value << " ";
    std::cout << std::endl;
}
