/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/06 10:24:10 by arommers      #+#    #+#                 */
/*   Updated: 2023/10/06 12:05:27 by arommers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(): _type("unspecified")
{
    std::cout << "Base default constructor called." << std::endl;
}

Animal::Animal(const Animal& original): _type(original._type)
{
    std::cout << "Base copy constructor called." << std::endl;
}

Animal& Animal::operator=(const Animal& rhs)
{
    std::cout << "Assignment operator overload called." << std::endl;
    if (this == &rhs)
        return (*this);
    _type = rhs._type;
    return (*this);
}

Animal::~Animal()
{
    std::cout << "Base destructor called." << std::endl;
}

void    Animal::setType(std::string type)
{
    _type = type;
}

std::string Animal::getType() const
{
    return (_type);
}

void    Animal::makeSound() const
{
    std::cout << "I'm unspecified. What do you expect me to say?" << std::endl;
}