/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/11 11:01:13 by arommers      #+#    #+#                 */
/*   Updated: 2024/01/11 14:35:26 by arommers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
    std::vector<int> myVector = {1, 2 , 3, 3, 4, 5, 5};
    std::cout << "Trying out our function with a vector of integers... " << std::endl;
    std::cout << std::endl;
    easyfind(myVector, 3);
    easyfind(myVector, -152348);
    std::cout << std::endl;
    
    std::set<int> mySet = {1, 3, 5, 7};
    std::cout << "Trying out our function with a set of integers... " << std::endl;
    std::cout << std::endl;
    easyfind(mySet, 3);
    easyfind(mySet, -2);
    std::cout << std::endl;

    std::list<int> myList = {1, 2, 3, 44, 5, 5, 7};
    std::cout << "Trying out our function with a list of integers... " << std::endl;
    std::cout << std::endl;
    easyfind(myList, 44);
    easyfind(myList, 0);
    std::cout << std::endl;

    std::deque<int> myDeque = {1, 2, 3, 44, 5, 5, 7};
    std::cout << "Trying out our function with a deque of integers... " << std::endl;
    std::cout << std::endl;
    easyfind(myDeque, 3);
    easyfind(myDeque, -2);
    std::cout << std::endl;

    std::vector<int> emptyVector = {};
    std::cout << "Trying out our function with an empty container... " << std::endl;
    easyfind(emptyVector, 5);

    return (0);
}