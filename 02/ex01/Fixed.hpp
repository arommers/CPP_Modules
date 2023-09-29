/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/29 10:33:30 by arommers      #+#    #+#                 */
/*   Updated: 2023/09/29 13:59:29 by arommers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed 
{
    private:
        int _value;
        static const int _fracBits = 8;

    public:
        // Default constructor
        Fixed();

        // Custom constructor that takes an int as parameter and converts it to it's fixed point value
        Fixed(const int intValue);

        // Custom constructor that takes an int as parameter and converts it to it's fixed point value
        Fixed(const float floatValue);

        // Copy constructor
        Fixed(const Fixed& other);

        // Copy assignment operator overload
        Fixed& operator=(const Fixed& other);

        // Destructor
        ~Fixed();

        // Member function to get the raw bits
        int getRawBits() const;

        // Member function to set the raw bits
        void setRawBits(int const raw);

        // Member function to convert to a floating-point value
        float   toFloat() const;

        // Member function to convert to an integer value
        int toInt() const;

        
};

        //Overload of the insertion operator
        std::ostream& operator<<(std::ostream& os, const Fixed& object);
        
#endif
