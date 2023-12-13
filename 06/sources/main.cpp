/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/11 14:05:05 by arommers      #+#    #+#                 */
/*   Updated: 2023/12/13 15:05:48 by arommers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Scalar.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "Please provide: <./convert> <argument>";
        return (EXIT_FAILURE);
    }
    ScalarConverter::convert(argv[1]);  
    return (EXIT_SUCCESS);
}