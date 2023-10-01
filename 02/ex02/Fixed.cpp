/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/29 10:33:46 by arommers      #+#    #+#                 */
/*   Updated: 2023/10/01 15:04:20 by adri          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Constructors
 
Fixed::Fixed() : _value(0)
{
    // std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int intValue)
{
    // std::cout << "Int constructor called" << std::endl;
    this->_value = intValue << _fracBits;
}

Fixed::Fixed(const float floatValue)
{
    // std::cout << "Float constructor called" << std::endl;
    this->_value = static_cast<int>(floatValue * (1 << _fracBits));
}


Fixed::Fixed(const Fixed& other): _value(other._value)
{
    // std::cout << "Copy constructor called" << std::endl;
}

// Destructor

Fixed::~Fixed()
{
    // std::cout << "Destructor called" << std::endl;
}

// Comparison operators

bool    Fixed::operator>(const Fixed& rhs) const
{
    return (this->_value > rhs._value);
}

bool    Fixed::operator<(const Fixed& rhs) const
{
    return (this->_value < rhs._value);
}

bool    Fixed::operator>=(const Fixed& rhs) const
{
    return (this->_value >= rhs._value);
}

bool    Fixed::operator<=(const Fixed& rhs) const
{
    return (this->_value <= rhs._value);
}

bool    Fixed::operator==(const Fixed& rhs) const
{
    return (this->_value == rhs._value);
}
bool    Fixed::operator!=(const Fixed& rhs) const
{
    return (this->_value != rhs._value);
}

// Arithmetic operators

Fixed&  Fixed::operator=(const Fixed& rhs)
{
    // std::cout << "Copy assignment operator called" << std::endl;
    if (this != &rhs)
        _value = rhs._value;
    return (*this);
}

Fixed  Fixed::operator+(const Fixed& rhs)
{
    Fixed   result;
    result.setRawBits(this->_value + rhs.getRawBits());
    return (result);
}

Fixed Fixed::operator-(const Fixed& rhs)
{
    Fixed   result;
    result.setRawBits(this->_value - rhs.getRawBits());
    return (result);
}

Fixed   Fixed::operator*(const Fixed& rhs)
{
    Fixed   result;
    result.setRawBits(this->_value * rhs.getRawBits() >> rhs._fracBits);
    return (result);
}

Fixed   Fixed::operator/(const Fixed& rhs)
{
    Fixed   result;
    result.setRawBits((this->_value << this->_fracBits) / rhs.getRawBits());
    return (result);
}

// Increment/decrement operators overload

// Pre_increment
Fixed&  Fixed::operator++()
{
    this->_value += 1;
    return (*this);
}

//  Post_Increment
Fixed  Fixed::operator++(int)
{
    Fixed   tmp(*this);
    operator++();
    return (tmp);
}

// Pre_decrement
Fixed&  Fixed::operator--()
{
    this->_value -= 1;
    return (*this);
}

//  Post_decrement
Fixed  Fixed::operator--(int)
{
    Fixed   tmp(*this);
    operator--();
    return (tmp);
}

//  Static Member function to compare instance values
Fixed&   Fixed::min(Fixed& lhs, Fixed&rhs)
{
    return ((lhs < rhs) ? lhs : rhs);
}

const Fixed&   Fixed::min(const Fixed& lhs,const Fixed&rhs)
{
    return ((lhs < rhs) ? lhs : rhs);
}
Fixed&   Fixed::max(Fixed& lhs, Fixed&rhs)
{
    return ((lhs > rhs) ? lhs : rhs);
}
const Fixed&   Fixed::max(const Fixed& lhs, const Fixed&rhs)
{
    return ((lhs > rhs) ? lhs : rhs);
}

int Fixed::getRawBits() const
{
    // std::cout << "getRawBits member function called" << std::endl;
    return (this->_value); 
}

void    Fixed::setRawBits(int const raw)
{
    // std::cout << "setRawBits member function called" << std::endl;
    this->_value = raw;
}

float   Fixed::toFloat() const
{
    return (static_cast<float>(this->_value) / (1 << _fracBits));
}

int Fixed::toInt() const
{
    return(this->_value >> _fracBits);
}

// Non member function

std::ostream& operator<<(std::ostream& os, const Fixed& object)
{
    os << object.toFloat();
    return (os);
}