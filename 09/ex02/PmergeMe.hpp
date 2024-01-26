/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PmergeMe.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/26 13:53:44 by arommers      #+#    #+#                 */
/*   Updated: 2024/01/26 22:18:53 by arommers      ########   odam.nl         */
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
    std::vector<int> parseNumbers(const std::string& input);
    void    pairUp(std::vector<int>& input, std::vector<int>& chainA, std::vector<int>& chainB);


};