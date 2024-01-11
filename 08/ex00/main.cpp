/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/11 15:15:43 by arommers      #+#    #+#                 */
/*   Updated: 2024/01/11 15:20:40 by arommers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
    std::vector<int> myVector   = {1, 3, 5, 7};
    std::list<int> myList       = {1, 3, 5, 7};
    std::set<int> myDeque       = {1, 3, 5, 7};
    std::set<int> mySet         = {1, 3, 5, 7};
    
    std::cout << "Testing our function with a vector of integers... " << std::endl;
    std::cout << std::endl;
    easyfind(myVector, 3);
    easyfind(myVector, -152348);
    std::cout << std::endl;
    
    std::cout << "Testing our function with a list of integers... " << std::endl;
    std::cout << std::endl;
    easyfind(myList, 7);
    easyfind(myList, -2);
    std::cout << std::endl;
    
    std::cout << "Testing our function with a deque of integers... " << std::endl;
    std::cout << std::endl;
    easyfind(myDeque, 5);
    easyfind(myDeque, -2);
    std::cout << std::endl;


    std::cout << "Testing our function with a set of integers... " << std::endl;
    std::cout << std::endl;
    easyfind(mySet, 3);
    easyfind(mySet, -2);
    std::cout << std::endl;

    std::vector<int> emptyVector = {};

    std::cout << "Trying out our function with an empty container... " << std::endl;
    easyfind(emptyVector, 5);

    return (0);
}