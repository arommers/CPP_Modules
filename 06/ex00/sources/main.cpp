/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/11 14:05:05 by arommers      #+#    #+#                 */
/*   Updated: 2023/12/21 10:55:44 by arommers      ########   odam.nl         */
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

    // ScalarConverter::convert("0");              // Convert zero
    // ScalarConverter::convert("A");              // Convert a single character
    // ScalarConverter::convert("123");            // Convert a positive integer
    // ScalarConverter::convert("-456");           // Convert a negative integer
    // ScalarConverter::convert("3.14f");          // Convert a float
    // ScalarConverter::convert("-7.77");          // Convert a double
    // ScalarConverter::convert("inf");            // Convert positive infinity
    // ScalarConverter::convert("-inff");          // Convert negative infinity
    // ScalarConverter::convert("nan");            // Convert NaN
    // ScalarConverter::convert("nanf");           // Convert NaN as a float
    // ScalarConverter::convert("+inf");           // Convert positive infinity
    // ScalarConverter::convert("+inff");          // Convert positive infinity
    // ScalarConverter::convert("hello world");    // Convert a character string

    return (EXIT_SUCCESS);
}

