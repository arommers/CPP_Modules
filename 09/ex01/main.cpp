/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/22 10:36:40 by arommers      #+#    #+#                 */
/*   Updated: 2024/01/22 10:49:26 by arommers      ########   odam.nl         */
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
    return (0);
}