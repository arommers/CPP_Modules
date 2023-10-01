/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/29 10:33:30 by arommers      #+#    #+#                 */
/*   Updated: 2023/10/01 14:57:24 by adri          ########   odam.nl         */
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

        // Destructor
        ~Fixed();

        // Comparison operators
        bool    operator>(const Fixed& rhs) const;
        bool    operator<(const Fixed& rhs) const;
        bool    operator>=(const Fixed& rhs) const;
        bool    operator<=(const Fixed& rhs) const;
        bool    operator==(const Fixed& rhs) const;
        bool    operator!=(const Fixed& rhs) const;
        
        // Arithmetic operators overload
        Fixed   operator+(const Fixed& rhs);
        Fixed   operator-(const Fixed& rhs);
        Fixed   operator*(const Fixed& rhs);
        Fixed   operator/(const Fixed& rhs);

        // Copy assignment operator overload
        Fixed&  operator=(const Fixed& rhs);

        // Increment/decrement operators overload
        Fixed&  operator++();
        Fixed  operator++(int);
        Fixed&  operator--();
        Fixed  operator--(int);

        // Static member functions for comparisons
        static Fixed&   min(Fixed& lhs, Fixed&rhs);
        static Fixed&   max(Fixed& lhs, Fixed&rhs);
        static const Fixed&   min(const Fixed& lhs, const Fixed&rhs);
        static const Fixed&   max(const Fixed& lhs, const Fixed&rhs);

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
