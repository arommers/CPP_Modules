/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/06 11:50:54 by arommers      #+#    #+#                 */
/*   Updated: 2023/10/06 12:26:15 by arommers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal()
{
    _type = "Cat";
    std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat& original): Animal(original)
{
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat&    Cat::operator=(const Cat& rhs)
{
    std::cout << "Cat assignment operator overload called" << std::endl;
    if (this == &rhs)
        return (*this);
    Animal::operator=(rhs);
    return (*this);
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
}

void    Cat::makeSound() const
{
    std::cout << "MEOW" << std::endl;
}