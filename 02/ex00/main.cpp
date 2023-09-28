/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/28 15:44:04 by arommers      #+#    #+#                 */
/*   Updated: 2023/09/28 21:36:25 by adri          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main()
{
    // Create a Fixed object 'a' using the default constructor
    // This sets the value of 'a' to 0.
    Fixed a;
    
    // Create a Fixed object 'b' using the copy constructor and pass 'a' as an argument
    // This copies the value of 'a' into 'b'.
    Fixed b(a);

    // Create a Fixed object 'c' using the default constructor
    // This sets the value of 'c' to 0.
    Fixed c;
    
    // Assign the value of 'b' to 'c' using the assignment operator overload
    // This copies the value of 'b' into 'c'.
    c = b;
    
    // Print the raw value of 'a' to the console
    std::cout << a.getRawBits() << std::endl;

    // Print the raw value of 'b' to the console
    std::cout << b.getRawBits() << std::endl;

    // Print the raw value of 'c' to the console
    std::cout << c.getRawBits() << std::endl;

    // Return 0 to indicate successful execution of the program
    return (0);
}
