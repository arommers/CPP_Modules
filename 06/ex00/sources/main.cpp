/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/11 14:05:05 by arommers      #+#    #+#                 */
/*   Updated: 2023/12/19 12:02:36 by arommers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Scalar.hpp"
#include "Types.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "Error: Please provide: <./convert> <argument>";
        return (EXIT_FAILURE);
    }
    ScalarConverter::convert(argv[1]);  
    return (EXIT_SUCCESS);
}