/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/11 15:23:57 by arommers      #+#    #+#                 */
/*   Updated: 2024/01/12 12:24:38 by arommers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

void    pressEnter()
{
    std::cout << "Press enter to continue..." << std::endl;
    std::cin.ignore();
    std::cout << RESET;
}

void    tester(const std::string& test)
{
    std::cout << RESET;
    int size    = 34;
    int msg     = test.length();
    int spaces  = (size - msg) / 2;
    
    std::cout << "************************************" << std::endl;
    std::cout << "*";
    for (int i = 0; i < spaces; i++)
        std::cout << " ";
    std::cout << test;
    for (int i = 0; i < spaces; i++)
        std::cout << " ";
    std::cout << "*" << std::endl;
    std::cout << "************************************" << std::endl;
}


int main()
{
    {
        tester("Running Subject Main");
        
        Span sp = Span(5);
        
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
        std::cout << "*" << std::endl;
    }
    pressEnter();
    {
        tester("General Test");
    
        Span sp = Span(20);
        sp.fill();
    }
    

    
    
    return (0);
}