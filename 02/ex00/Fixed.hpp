/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/28 15:42:52 by arommers      #+#    #+#                 */
/*   Updated: 2023/09/28 15:57:37 by arommers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
    private:
        int                 _value;
        const static int    _fracBits;
    public:
        Fixed(int value);
        Fixed(const Fixed& other);
        Fixed&  operator=(const Fixed& rhs)
        {
            if (this == &rhs)
                return (*this);
            _value = rhs._value;
            return (*this);
            
        }
        ~Fixed();
};

#endif 