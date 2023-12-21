/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/20 15:24:13 by arommers      #+#    #+#                 */
/*   Updated: 2023/12/21 11:32:19 by arommers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main()
{
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    std::cout << "Let's identify some classes through pointers" << std::endl;
    std::cout << std::endl;
    for (int i = 0; i < 5; i++)
    {
        Base *ptr = generate();
        identify(ptr);
        delete ptr;
    }
    std::cout << std::endl;

    std::cout << "Let's identify some classes through references" << std::endl;
    std::cout << std::endl;
    for (int i = 0; i < 5; i++)
    {
        Base *ptr = generate();
        identify(*ptr);
        delete ptr;
    }
    std::cout << std::endl;

    std::cout << "Let's try some bad input" << std::endl;
    std::cout << std::endl;
    
    Base    *badInput1 = nullptr;
    
    std::cout << "badInput1: ";
    identify(badInput1);
    std::cout << std::endl;

    return (0);
}
