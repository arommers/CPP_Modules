/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/11 15:23:57 by arommers      #+#    #+#                 */
/*   Updated: 2024/01/12 16:24:44 by arommers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

void    pressEnter()
{
    std::cout << "Press enter to continue..." << std::endl;
    std::cin.ignore();
    std::cout << RESET;
}

void    printSpan(Span& sp)
{
    std::cout << sp << std::endl;
    std::cout << std::endl;
    std::cout << "Shortest span in our container: " << sp.shortestSpan() << std::endl;
    std::cout << "Shortest span in our container: " << sp.longestSpan() << std::endl;
    std::cout << "Size = "<< sp.getContainer().size() << std::endl;
    std::cout << std::endl;
}

void    tester(const std::string& test)
{
    std::cout << RESET;
    int size    = 34;
    int msg     = test.length();
    int spaces  = (size - msg) / 2;
    
    std::cout << GREEN << "************************************" << std::endl;
    std::cout << "*";
    for (int i = 0; i < spaces; i++)
        std::cout << " ";
    std::cout << test;
    for (int i = 0; i < spaces; i++)
        std::cout << " ";
    std::cout << "*" << std::endl;
    std::cout << "************************************" << RESET <<std::endl;
}

int main()
{
    srand(static_cast<unsigned int>(time(nullptr)));
    {
        tester("Running Subject Main");
        
        Span sp = Span(5);
        
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        printSpan(sp);   
    }
    pressEnter();
    {
        tester("General Test");
    
        Span sp = Span(20);
        
        std::cout << "Adding individual values one bye one: " << std::endl;
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << std::endl;
        printSpan(sp);

        std::cout << "Filling the rest of our container with random variables: " << std::endl;
        std::cout << std::endl;
        sp.fill();
        printSpan(sp);
    }
    pressEnter();

    return (0);
}