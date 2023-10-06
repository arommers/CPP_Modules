/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/06 10:55:02 by arommers      #+#    #+#                 */
/*   Updated: 2023/10/06 11:44:02 by arommers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal()
{
    this->_type = "Dog";
    std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog& original): Animal(original)
{
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog&    Dog::operator=(const Dog& rhs)
{
    std::cout << "Dog assignment overload operator Called" << std::endl;
    if (this == &rhs)
        return (*this);
    Animal::operator=(rhs);
    return(*this);
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
}

void    Dog::makeSound()
{
    std::cout << "WOOF" << std::endl;
}