/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/20 15:24:13 by arommers      #+#    #+#                 */
/*   Updated: 2023/12/20 16:24:54 by arommers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main()
{
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    std::cout << "let's make some random derived classes and identify them through pointers" << std::endl;
    std::cout << "Press Enter to continue...";
    std::cin.get();
    std::cout << std::endl;
    for (int i = 0; i < 5; i++)
    {
        Base *ptr = generate();
        identify(ptr);
        delete ptr;
    }
    std::cout << std::endl;

    std::cout << "Press enter if you want to identify some classes through references" << std::endl;
    std::cin.get();


    return (0);
}