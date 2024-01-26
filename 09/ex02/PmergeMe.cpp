/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PmergeMe.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/26 13:53:20 by arommers      #+#    #+#                 */
/*   Updated: 2024/01/26 22:51:37 by arommers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp" 


std::vector<int> PmergeMe::parseNumbers(const std::string& input)
{
    int num;
    std::vector<int>    numbers;
    std::istringstream  str(input);

    while (str >> num)
        numbers.push_back(num);
}

void    PmergeMe::pairUp(std::vector<int>& input, std::vector<int>& chainA, std::vector<int>& chainB)
{
   std::vector<std::vector<int> >   pairs;
   int value = (input.size() % 2 == 0) ? input.back() : 0;
   if (!value)
    input.pop_back();
    
   for (int i = 0; i < input.size(); i += 2)
   {
        std::vector<int> currentPair = {input[i], input[i + 1]};
        std::sort(currentPair.begin(), currentPair.end());
        pairs.push_back(currentPair);
   }
   std::sort(pairs.begin(), pairs.end(), [](auto& a, auto& b) {
    return (a[1] < b[1]);
   });
   for (auto& pair : pairs)
   {
    chainA.push_back(pair[1]);
    chainB.push_back(pair[0]);
   }
   if (value)
    chainB.push_back(value);
}