/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   types.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/19 11:11:51 by arommers      #+#    #+#                 */
/*   Updated: 2023/12/19 12:01:37 by arommers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <Scalar.hpp>

bool    charCheck(const std::string& input)
{
    int i = static_cast<int>(input[0]);

    if (input.size() != 1)
        return (false);
    if (i < 0 || i > 127)
        return (false);
    return (true);
}

bool    intCheck(const std::string& input)
{
    if (input.size() == 0)
        return (false);
    if (input[0] != '+' && input[0] != '-' && !isdigit(input[0]))
        return (false);
    for (char c : input)
    {
        if (!isdigit(c))
            return false;
    }
    return (true);
}

void    convertChar(const std::string& input)
{
    int i = static_cast<int>(input[0]);
    
    if (isprint(input[0]))
        std::cout << "char: " << input[0] << std::endl;
    else if (i < 0 || i > 127)
        std::cout << "char: impossible" << std::endl;
    else
        std::cout << "char: non displayable" << std::endl;
    std::cout << "int: " << i << std::endl;
    std::cout << "float: " << static_cast<float>(input[0]) << ".0f"<< std::endl;
    std::cout << "double: " << static_cast<double>(input[0]) << ".0"<< std::endl;
}

//implement overflow check

void convertInt(const std::string& input)
{
    int i;
    std::stringstream str(input);

    str >> i;
    if (i < 0 || i > 127)
        std::cout << "char: impossible" << std::endl;
    else if (!isprint(static_cast<char>(i)))
        std::cout << "char: non displayable" << std::endl;
    else
        std::cout << "char: " << static_cast<char>(i) << std::endl;
    std::cout << "int: " << i << std::endl;
    std::cout << "float: " << static_cast<float>(i) << ".0f"<< std::endl;
    std::cout << "double: " << static_cast<double>(i) << ".0"<< std::endl;
}