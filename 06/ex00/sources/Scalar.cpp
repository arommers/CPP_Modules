/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Scalar.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/11 14:03:00 by arommers      #+#    #+#                 */
/*   Updated: 2023/12/15 14:30:08 by arommers      ########   odam.nl         */
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

// static int ConvertChar(const std::string& input, std::string& charValue)
// {
//     if (input.size() == 1 && !isdigit(input[0]) && isprint(input[0]))
//     {
//         charValue = input[0];
//         if (charValue.empty())
//             std::cerr << "char: Impossible" << std::endl;
//         else
//             std::cout << "char: " << charValue << std::endl;
//         std::cout << "int: " << static_cast<int>(charValue[0]) << std::endl; //  treat the binary representation of the char as if it were an int
//         std::cout << "float: " << static_cast<float>(charValue[0]) << std::endl; // convert the ASCII value of the character to its corresponding floating-point representation
//         std::cout << "double: " << static_cast<double>(charValue[0]) << std::endl; // conver the ASCII value of the character to its corresponding floating-point representation.
//         return (1);
//     }
//     return (0);
// }

// static int ConvertInt(const std::string& input, std::string& charValue)
// {
//     try 
//     {
//         size_t pos;
//         int intValue = std::stoi(input, &pos);

//         if (pos == input.length()) 
//         {
//             if (charValue.empty()) 
//                 std::cout<< "char: impossible" << std::endl;
//             else
//                 std::cout << "char: '" << static_cast<char>(intValue) << "'" << std::endl;
//             std::cout << "int: " << intValue << std::endl;
//             std::cout << "float: " << static_cast<float>(intValue) << ".0f" << std::endl;
//             std::cout << "double: " << static_cast<double>(intValue) << ".0" << std::endl;
//             return (1);
//         } 
//     }
//     catch(const std::invalid_argument&)
//     {
//         return (0);
//     }
//     catch (const std::out_of_range&)
//     {
//         std::cerr << "Out of range for an integer" << std::endl;
//         return (1);
//     }
//     return (0);
// }

// static int  ConvertFloat(const std::string& input, std::string charValue)
// {
//     char lastChar = input.back();
//     if (lastChar == 'f' || lastChar == 'F')
//     {
//         try 
//         {
//             size_t pos;
//             float floatValue = std::stof(input, &pos);
            
//             if (pos == input.length() - 1)
//             {
//                 if (charValue.empty()) 
//                     std::cout<< "char: impossible" << std::endl;
//                 else
//                     std::cout << "char: '" << static_cast<char>(floatValue) << "'" << std::endl;
//                 std::cout << "int: " << static_cast<int>(floatValue) << std::endl;
//                 std::cout << "float: " << floatValue << "f" << std::endl;
//                 std::cout << "double: " << static_cast<double>(floatValue) << std::endl;
//                 return (1);
//             }
//         } 
//         catch (const std::out_of_range&)
//         {
//             std::cerr << "Out of range for a float" << std::endl;
//             return (1);
//         }
//     }
//     return (0);
// }

// static int ConvertDouble(const std::string& input, std::string charValue)
// {
//     try
//     {
//         size_t pos;
//         double doubleValue = std::stod(input, &pos);
//         if (pos == input.length())
//         {
//             if (charValue.empty()) 
//                 std::cout<< "char: impossible" << std::endl;
//             else
//                 std::cout << "char: '" << static_cast<char>(doubleValue) << "'" << std::endl;
//             std::cout << "int: " << static_cast<int>(doubleValue) << std::endl;
//             std::cout << "float: " << static_cast<float>(doubleValue) << "f" << std::endl;
//             std::cout << "double: " << doubleValue << std::endl;
//             return (1);
//         }
//     }
//     catch (const std::out_of_range&)
//     {
//         std::cerr << "Out of range for a double" << std::endl;
//         return (1);
//     }
//     return (0);
// }



// void    ScalarConverter::convert(const std::string& input)
// {
//     std::string charValue = "";

//     if (ConvertChar(input, charValue))
//         return ;
//     if (ConvertInt(input, charValue))
//         return ;
//     if (ConvertFloat(input, charValue))
//         return ;
//     if (ConvertDouble(input, charValue))
//         return ;
//     std::cout << "Error: Not a valid character, integer, float, or double." << std::endl;
// }


void    ScalarConverter::convert(const std::string& input)
{
    std::string charValue = "";
    int         intValue = 0;
    int         floatValue = 0;
    int         doubleValue = 0;
    
    if (input.size() == 1 && !isdigit(input[0]) && isprint(input[0]))
    {
        charValue = input[0];
        std::cout << "char: " << charValue << std::endl;
        std::cout << "int: " << static_cast<int>(charValue[0]) << std::endl; //  treat the binary representation of the char as if it were an int
        std::cout << "float: " << static_cast<float>(charValue[0]) << std::endl; // convert the ASCII value of the character to its corresponding floating-point representation
        std::cout << "double: " << static_cast<double>(charValue[0]) << std::endl; // conver the ASCII value of the character to its corresponding floating-point representation.
        return ;
    }

    intValue = std::atoi(input.c_str());
    floatValue = std::stof(input);
    doubleValue = std::stod(input);
    if (charValue == "" && std::isprint(intValue))
    {
        charValue += "'";
        charValue += static_cast<char>(intValue);
        charValue += "'";
    }
    else if (charValue == "")
        charValue = "non displayable";
    
    std::cout << "char: " << charValue << std::endl;
    if (floatValue == 0)
    {
        std::cout << "float: " << floatValue << ".0f" << std::endl;
        std::cout << "double: " << doubleValue << ".0" << std::endl;
    }
    else
    {
        std::cout << "float: " << floatValue << "f" << std::endl;
        std::cout << "double: " << doubleValue << std::endl;
    }  
}

