/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/11 15:23:57 by arommers      #+#    #+#                 */
/*   Updated: 2024/01/13 15:26:52 by adri          ########   odam.nl         */
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
    std::cout << "Longest span in our container: " << sp.longestSpan() << std::endl;
    std::cout << "Size = "<< sp.getContainer().size() << std::endl;
    std::cout << std::endl;
}

void    tester(const std::string& test, int valid)
{
    std::cout << RESET;
    int size    = 34;
    int msg     = test.length();
    int spaces  = (size - msg) / 2;
    std::string color = (valid == 1) ? GREEN : RED;
    
    std::cout << color << "************************************" << std::endl;
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
        tester("Running Subject Main", 1);
        
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
        tester("General Tests", 1);
    
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
        
        std::cout << "Creating an empty array: " << std::endl;
        Span sp2;
        std::cout << std::endl;
        std::cout << sp2;
        std::cout << std::endl;
    }
    pressEnter();
    {
        tester("Error Tests", 0);

        
        
        Span sp = Span(1);
        sp.addNumber(5);
        std::cout << "Trying to add a elements beyond our capacity: " << std::endl;
        std::cout << std::endl;
        try
        {
            sp.addNumber(5);
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        std::cout << std::endl;
        std::cout << "Trying to print the spans of a container with one element: " << std::endl;
        std::cout << std::endl;
        try
        {
            std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        std::cout << std::endl;
        try
        {
            std::cout << "Longest span: " << sp.longestSpan() << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        std::cout << std::endl;

    }
    pressEnter();
    {
        tester("Big Container Test", 1);
        std::cout << "We are about to fill our container with 100000 elements..." << std::endl;
        std::cout << std::endl;
        pressEnter();

        Span sp = Span(100000);
        
        std::cout << std::endl;
        sp.fill();
        printSpan(sp);
    }
    return (0);
}