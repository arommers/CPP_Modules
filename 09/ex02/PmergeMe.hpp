/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PmergeMe.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/26 13:53:44 by arommers      #+#    #+#                 */
/*   Updated: 2024/01/28 12:39:41 by arommers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <sstream>
#include <algorithm>
#include <vector>
#include <list>

class PmergeMe
{
    
  public:
    PmergeMe();
    PmergeMe(const PmergeMe& rhs);
    ~PmergeMe();

    const PmergeMe& operator=(const PmergeMe& rhs);
    
    std::vector<int> parseNumbers(const std::string& input);
    void  binaryInsert(std::vector<int>& chainA, int start, int len, int value);
    void  pairUp(std::vector<int>& input, std::vector<int>& chainA, std::vector<int>& chainB);
    void  insertSort(std::vector<int>& chainA, std::vector<int>& chainB);
    void  sortVector(const std::string& input);
    int   jacobS(int n);

    void  printVector(const std::vector<int>& input);
};