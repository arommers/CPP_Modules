/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PmergeMe.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/26 13:53:20 by arommers      #+#    #+#                 */
/*   Updated: 2024/01/28 20:08:36 by arommers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp" 

PmergeMe::PmergeMe() {}
PmergeMe::PmergeMe(const PmergeMe& rhs){}
PmergeMe::~PmergeMe() {}
const PmergeMe& PmergeMe::operator=(const PmergeMe& rhs) {return (*this = rhs);}

//  ==================================== VECTOR FUNCTIONS ====================================

// std::vector<int> PmergeMe::parseNumbers(const std::string& input)
// {
//     int num;
//     std::vector<int>    numbers;
//     std::istringstream  str(input);

//     while (str >> num)
//         numbers.push_back(num);
//     return (numbers);
// }

void    PmergeMe::makeVecPairs(std::vector<int>& input, std::vector<int>& chainA, std::vector<int>& chainB)
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
}

void    PmergeMe::binaryVecInsert(std::vector<int>& chainA, int start, int len, int value)
{
    if (start >= len)
    {
        chainA.insert(chainA.begin() + start, value);
        return ;
    }

    int mid = start + (len - start) / 2;
    
    if (chainA[mid] < value)
        binaryVecInsert(chainA, mid + 1, len, value);
    else
        binaryVecInsert(chainA, start, mid, value);
}

void    PmergeMe::insertVecSort(std::vector<int>& chainA, std::vector<int>& chainB)
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
            binaryVecInsert(chainA, 0, chainA.size(), *it);
            ++i;
        }
        ++n;
    }
}

std::vector<int>    PmergeMe::sortVector(const std::string& input)
{
    std::vector<int>    chainA;
    std::vector<int>    chainB;
    
    auto start = std::chrono::high_resolution_clock::now();
    std::vector<int>    numbers = parseNumbers<std::vector<int> >(input);

    makeVecPairs(numbers, chainA, chainB);
    insertVecSort(chainA, chainB);
    auto end = std::chrono::high_resolution_clock::now();
    auto dur = std::chrono::duration_cast<std::chrono::microseconds>(end - start);
    return (chainA);
}

//  ==================================== LIST FUNCTIONS ====================================

void PmergeMe::makeListPairs(std::list<int>& input, std::list<int>& chainA, std::list<int>& chainB)
{
    std::list<std::pair<int, int>> pairs;
    int value = 0;

    if (input.size() % 2 == 1)
    {
        value = input.back();
        input.pop_back();
    }

    auto it = input.begin();
    while (it != input.end())
    {
        int first = *it++;
        int second = *it++;
        pairs.emplace_back(std::min(first, second), std::max(first, second));
    }

    pairs.sort([](const auto& a, const auto& b) {
        return a.second < b.second;
    });

    for (const auto& pair : pairs) {
        chainA.push_back(pair.second);
        chainB.push_back(pair.first);
    }

    if (value != 0)
        chainB.push_back(value);
}

void PmergeMe::binaryListInsert(std::list<int>& chainA, int value)
{
    auto it = std::upper_bound(chainA.begin(), chainA.end(), value);
    chainA.insert(it, value);
}

void PmergeMe::insertListSort(std::list<int>& chainA, const std::list<int>& chainB)
{
    auto itA = chainA.begin();
    auto itB = chainB.begin();

    if (itB != chainB.end())
        chainA.insert(chainA.begin(), *itB++);

    int i = 1;
    int n = 1;
    int len = chainB.size();

    while (i < len) {
        for (int j = jacobS(n); j > 0 && j > jacobS(n - 1); --j) {
            auto it = chainB.begin();
            if (j >= len)
                j = len - 1;
            std::advance(it, j);
            binaryListInsert(chainA, *it);
            ++i;
        }
        ++n;
    }
}

std::list<int>    PmergeMe::sortList(const std::string& input)
{
    std::list<int>    chainA;
    std::list<int>    chainB;
    
    auto start = std::chrono::high_resolution_clock::now();
    std::list<int>    numbers = parseNumbers<std::list<int> >(input);

    makeListPairs(numbers, chainA, chainB);
    insertListSort(chainA, chainB);
    auto end = std::chrono::high_resolution_clock::now();
    auto dur = std::chrono::duration_cast<std::chrono::microseconds>(end - start);
    return (chainA);
}

// ==================================== COMMON FUNCTIONS ====================================

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

void    PmergeMe::printResults(const vec& input, vec sortedVec, li sortedList, const durType& durV,  const durType& durL)
{
    std::cout << "Before:\t";
    for (auto value : input)
        std::cout << value << " ";
    std::cout << std::endl;
    std::cout << "Vector After:\t";
    for (auto value : sortedVec)
        std::cout << value << " ";
    std::cout << std::endl;
    std::cout << "List After:\t";
    for (auto value : sortedList)
        std::cout << value << " ";
    std::cout << std::endl;
    std::cout << "Time to process a range of " << input.size() << " elements with std::vector   : " << durV.count() << "us" << std::endl;;
    std::cout << "Time to process a range of " << input.size() << " elements with std::list     : " << durL.count() << "us" << std::endl;
}