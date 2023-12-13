/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Scalar.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/11 14:03:00 by arommers      #+#    #+#                 */
/*   Updated: 2023/12/13 16:33:32 by arommers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Scalar.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter& original)
{
    *this = original;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& rhs) 
{
    (void)rhs;
    return (*this);
}

ScalarConverter::~ScalarConverter() {}

void    ScalarConverter::convert(const std::string& input) 
{
    std::string charValue = "";
    // int         intValue = 0;
    // int         floatValue = 0;
    // int         doubleValue = 0;

    if (input.size() == 1 && !isdigit(input[0]) && isprint(input[0]))
    {
        charValue = input[0];
        std::cout << "Char: " << charValue << std::endl;
        std::cout << "Int: " << static_cast<int>(charValue[0]) << std::endl; //  treat the binary representation of the char as if it were an int
        std::cout << "Float: " << static_cast<float>(charValue[0]) << std::endl; // convert the ASCII value of the character to its corresponding floating-point representation
        std::cout << "Double: " << static_cast<double>(charValue[0]) << std::endl; // conver the ASCII value of the character to its corresponding floating-point representation.
    }
}