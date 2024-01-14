/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: adri <adri@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/14 11:38:27 by adri          #+#    #+#                 */
/*   Updated: 2024/01/14 21:03:34 by adri          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

void    pressEnter()
{
    std::cout << "Press enter to continue..." << std::endl;
    std::cin.ignore();
    std::cout << RESET;
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
    {
        MutantStack<int> mstack;
        
        mstack.push(5);
        mstack.push(17);
        std::cout << mstack.top() << std::endl;
        mstack.pop();
        std::cout << mstack.size() << std::endl;
        mstack.push(3);
        mstack.push(5);
        mstack.push(737);
        //[...]
        mstack.push(0);
        
        MutantStack<int>::iterator it = mstack.begin();
        MutantStack<int>::iterator ite = mstack.end();
        
        ++it;
        --it;
        while (it != ite)
        {
            std::cout << *it << std::endl;
            ++it;
        }
        // std::stack<int> s(mstack);
    }
    pressEnter();
    {
        tester("Running all base class stack methods: ", 1);
        {
            MutantStack<int>    mstack;
            std::cout <<std::endl;
            std::cout << ""
        }
    }
    return 0;
}