/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   types.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/19 11:11:51 by arommers      #+#    #+#                 */
/*   Updated: 2023/12/19 15:18:17 by arommers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <Types.hpp>

bool    pseudoCheck(const std::string& input)
{
    if (input == "inf" 
        || input == "inff" 
        || input == "+inf" 
        || input == "+inff" 
        || input == "-inf" 
        || input == "-inff" 
        || input == "nan" 
        || input == "nanf")
        return (true);
    return (false);
}

bool    charCheck(const std::string& input)
{
    int i = static_cast<int>(input[0]);

    std::cout << "TEST 1" << std::endl;

    if (input.size() != 1 || isdigit(input[0]))
        return (false);
    if (i < 0 || i > 127)
        return (false);
    return (true);
}

bool    intCheck(const std::string& input)
{
    std::cout << "TEST 2" << std::endl;
    
    
    if (input.size() == 0)
        return (false);
    if (input[0] != '+' && input[0] != '-' && !isdigit(input[0]))
        return (false);
    for (char c : input)
    {
        if (!isdigit(c) && c != '+' && c != '-')
            return false;
    }
    return (true);
}

bool    floatCheck(const std::string& input)
{
    size_t dotPosition;
    
    std::cout << "TEST 3" << std::endl;

    
    if (input.size() == 0)
        return (false);
    if (input[0] != '+' && input[0] != '-' && !isdigit(input[0]))
        return (false);
    if (input.back() != 'f')
        return (false);
    dotPosition = input.find('.');
    if (dotPosition == std::string::npos || dotPosition == input.size() - 2)
        return (false);
    for (size_t i = 0; i < input.size() - 1; i++)
    {
        if (!isdigit(input[i]) && input[i] != '.' && input[i] != '+' && input[i] != '-')
            return false;
    }
    return (true);     
}

bool    doubleCheck(const std::string& input)
{
    size_t dotPosition;
    
    std::cout << "TEST 4" << std::endl;
    
    if (input.size() == 0)
        return (false);
    if (input[0] != '+' && input[0] != '-' && !isdigit(input[0]))
        return (false);
    dotPosition = input.find('.');
    if (dotPosition == std::string::npos || dotPosition == input.size() - 1)
        return (false);
    for (size_t i = 0; i < input.size(); i++)
    {
        if (!isdigit(input[i]) && input[i] != '.' && input[i] != '+' && input[i] != '-' && input[i] != 'e')
            return false;
    }
    return (true);
}

void    printPseudo(const std::string& input)
{
    if (input == "inf" || input == "+inf" || input == "inff" || input == "+inff")
    {
        std::cout << "char: " << "impossible" << std::endl;
        std::cout << "int: " << "impossible" << std::endl;
        std::cout << "float: " << "inff" << std::endl;
        std::cout << "double: " << "inf" << std::endl;
    }
    else if (input == "-inf" || input == "-inff")
    {
        std::cout << "char: " << "impossible" << std::endl;
        std::cout << "int: " << "impossible" << std::endl;
        std::cout << "float: " << "-inff" << std::endl;
        std::cout << "double: " << "-inf" << std::endl;
    }
    else
    {
            std::cout << "char: " << "impossible" << std::endl;
        std::cout << "int: " << "impossible" << std::endl;
        std::cout << "float: " << "nanf" << std::endl;
        std::cout << "double: " << "nan" << std::endl; 
    }
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
    int                 i;
    std::stringstream   str(input);

    str >> i; // error check handle needed
    // if(str.fail())
    //     return ;
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

void    convertFloat(const std::string& input)
{
    float               f;
    std::stringstream   str(input);

    str >> f; // error check handle needed
    if(str.fail())
        return ;
    if (isprint(static_cast<int>(f)))
        std::cout << "char: " << static_cast<char>(f) << std::endl;
    else if (f < 0 || f > 127)
        std::cout << "char: impossible" << std::endl;
    else
        std::cout << "char: non displayable" << std::endl;
    if (f > static_cast<float>(std::numeric_limits<int>::max()) || f < static_cast<float>(std::numeric_limits<int>::min()))
        std::cout << "int: impossible" << std::endl;
    else
        std::cout << "int: " << static_cast<int>(f) << std::endl;
    if (f - static_cast<int>(f) == 0)
    {
        std::cout << "float: " << f << ".0f" << std::endl;
        std::cout << "double: " << static_cast<double>(f) << ".0" << std::endl;
    }
    else
    {
        std::cout << "float: " << f << "f" << std::endl;
        std::cout << "double: " << static_cast<double>(f) << std::endl;
    }
}

void    convertDouble(const std::string& input)
{
    float               d;
    std::stringstream   str(input);

    str >> d;
    if (str.fail())
    {
        std::cerr << "overflow" << std::endl;
        return ; // error check handle needed
    }
    if (isprint(static_cast<int>(d)))
        std::cout << "char: " << static_cast<char>(d) << std::endl;
    else if (d < 0 || d > 127)
        std::cout << "char: impossible" << std::endl;
    else
        std::cout << "char: non displayable" << std::endl;
    if (d > static_cast<double>(std::numeric_limits<int>::max()) || d < static_cast<double>(std::numeric_limits<int>::min()))
        std::cout << "int: impossible" << std::endl;
    else
        std::cout << "int: " << static_cast<int>(d) << std::endl;
    if (d > static_cast<double>(std::numeric_limits<float>::max()) || d < -static_cast<double>(std::numeric_limits<float>::max()))
        std::cout << "float: impossible" << std::endl;
    if (d - static_cast<int>(d) == 0)
    {
        std::cout << "float: " << static_cast<float>(d) << ".0f" << std::endl;
        std::cout << "double: " << d << ".0" << std::endl;
    }
    else
    {
        std::cout << "float: " << static_cast<float>(d) << "f" << std::endl;
        std::cout << "double: " << d << std::endl;
    }
}
