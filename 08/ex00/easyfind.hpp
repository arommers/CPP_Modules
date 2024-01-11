/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   easyfind.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/11 11:01:36 by arommers      #+#    #+#                 */
/*   Updated: 2024/01/11 14:26:43 by arommers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <deque>
#include <set>

template<typename T>
bool easyfind(const T& container, int match)
{
    auto it = std::find(container.begin(), container.end(), match);
    
    if (it != container.end())
    {
        std::cout << "Element found in container at position: "; 
        std::cout << std::distance(container.begin(), it) << std::endl;
        return (false);
    }
    else
    {
        std::cout << "Element not found in container" << std::endl;
        return (true);
    }
}