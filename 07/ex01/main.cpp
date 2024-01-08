/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/08 11:46:03 by arommers      #+#    #+#                 */
/*   Updated: 2024/01/08 13:08:47 by arommers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
    char        charArray[] = {'a', 'b', 'c', 'd', 'e'};
    size_t      sizeChar = sizeof(charArray) / sizeof(char);
    
    iter (charArray, sizeChar, printelements<char>);
    std::cout << std::endl;

    int         intArray[] = {1, 2, 3, 4, 5};
    size_t      sizeInt = sizeof(intArray) / sizeof(int);

    iter (intArray, sizeInt, printelements<int>);
    std::cout << std::endl;

    float       floatArray[] = {1.5, 2.5, 3.5, 4.5, 5.5};
    size_t      sizeFloat = sizeof(floatArray) / sizeof(float);

    iter (floatArray, sizeFloat, printelements<float>);
    std::cout << std::endl;

    std::string stringArray[] = {"I", "am", "a", "string", "array"};
    size_t      sizeString = sizeof(stringArray) / sizeof(std::string);

    iter (stringArray, sizeString, printelements<std::string>);
    std::cout << std::endl;

    char negativeTestArray[] = {'a', 'b', 'c'};
    size_t incorrectSize = sizeof(negativeTestArray) / sizeof(char) + 1;
    iter(negativeTestArray, incorrectSize, printelements<char>);
    std::cout << std::endl;

    return (0);
}