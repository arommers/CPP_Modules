/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/08 13:15:09 by arommers      #+#    #+#                 */
/*   Updated: 2024/01/08 15:23:41 by arommers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
    Array<int>          intArray(5);
    unsigned int size = intArray.size();

    std::cout << "Let's test an array with integers..." << std::endl;
    std::cout << std::endl;

    std::cout << "Size of our array: " << size << std::endl;
    try {
        
        // Test out of bounds
        // intArray[8] = 8;
        for (unsigned int i = 0; i < 5; i++)
            intArray[i] = i;
        std::cout << "Original: ";
        intArray.printElements();
        std::cout << std::endl;

        // Test copy constructor
        Array<int> copy(intArray);
        std::cout << "Array copy: ";
        copy.printElements();
        std::cout << std::endl;
        // Show it's a deep copy
        for (unsigned int i = 0; i < 5; i++)
            copy[i] = i + 5;
        std::cout << "Deep copy: ";
        copy.printElements();
        std::cout << std::endl;
        std::cout << "Original: ";
        intArray.printElements();
        std::cout << std::endl;
        
        // Test assignment operator overload
        Array<int> assign = intArray;
        std::cout << "Assigned Array: ";
        assign.printElements();
        std::cout << std::endl;

        Array<int> emptyIntArray;
        
        std::cout << "Empty Array: ";
        emptyIntArray.printElements();
        std::cout << std::endl;
    } 
    catch (const std::exception& e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
    std::cout << "Press enter to run the same test with an array of strings..." << std::endl;
    std::cin.ignore();

    Array<std::string>  stringArray(3);
    size = stringArray.size();
    std::cout << "Size of our array: " << size << std::endl;
    try
    {
        for (unsigned int i = 0; i < 3; i++)
            stringArray[i] = "string " + std::to_string(i + 1);
        std::cout << "Original: ";
        stringArray.printElements();        
        std::cout << std::endl;

        // // Test copy constructor
        Array<std::string> sCopy(stringArray);
        std::cout << "Array copy: ";
        sCopy.printElements();
        std::cout << std::endl;
        // // Show it's a deep copy
        for (unsigned int i = 0; i < 3; i++)
            sCopy[i] = "string " + std::to_string(i + 4);
        std::cout << "Deep copy: ";
        sCopy.printElements();
        std::cout << std::endl;
        std::cout << "Original: ";
        stringArray.printElements();
        std::cout << std::endl;
        
        // // Test assignment operator overload
        Array<std::string> sAssign = stringArray;
        std::cout << "Assigned Array: ";
        sAssign.printElements();
        std::cout << std::endl;
        std::cout << std::endl;
    } 
    catch (const std::exception& e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
    return (0);
}