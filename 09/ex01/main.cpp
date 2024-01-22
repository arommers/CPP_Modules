/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/22 10:36:40 by arommers      #+#    #+#                 */
/*   Updated: 2024/01/22 14:58:33 by arommers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cerr << "Error: Please provide: <./RPN> <inverted Polish mathematical expression>" << std::endl;
        return (1);
    }
    
    RPN rpn;
    try
    {
        int result;
        std::string str = argv[1];
        result = rpn.parseInput(str);
        std::cout << "Result: "<< result << std::endl;;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    return (0);
}