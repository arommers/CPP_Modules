/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/06 11:50:54 by arommers      #+#    #+#                 */
/*   Updated: 2023/10/07 12:45:05 by adri          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// Cat

Cat::Cat(): Animal(), _brain(new Brain)
{
    _type = "Cat";
    std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat& original): Animal(original), _brain(new Brain)
{
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat&    Cat::operator=(const Cat& rhs)
{
    if (this == &rhs)
        return (*this);
    Animal::operator=(rhs);
    delete _brain;
    _brain = new Brain;
    std::cout << "Cat assignment operator overload called" << std::endl;
    return (*this);
}

Cat::~Cat()
{
    delete _brain;
    std::cout << "Cat destructor called" << std::endl;
}

void    Cat::makeSound() const
{
    std::cout << "MEOW" << std::endl;
}
