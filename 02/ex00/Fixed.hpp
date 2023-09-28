/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/28 15:42:52 by arommers      #+#    #+#                 */
/*   Updated: 2023/09/28 21:46:45 by adri          ########   odam.nl         */
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
};


#endif 