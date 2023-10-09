/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/06 10:55:02 by arommers      #+#    #+#                 */
/*   Updated: 2023/10/08 10:59:01 by adri          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog(): Animal(), _brain(new Brain)
{
    this->_type = "Dog";
    std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog& original): Animal(original), _brain(new Brain(*(original._brain)))
{
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog&    Dog::operator=(const Dog& rhs)
{
    if (this == &rhs)
        return (*this);
    Animal::operator=(rhs);
    delete _brain;
    _brain = new Brain;
    std::cout << "Dog assignment overload operator Called" << std::endl;
    return(*this);
}

Dog::~Dog()
{
    delete _brain;
    std::cout << "Dog destructor called" << std::endl;
}

void    Dog::makeSound() const
{
    std::cout << "WOOF" << std::endl;
}