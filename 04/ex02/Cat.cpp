/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/06 11:50:54 by arommers      #+#    #+#                 */
/*   Updated: 2023/10/09 12:24:36 by arommers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// Cat

Cat::Cat(): Animal(), _brain(new Brain)
{
    _type = "Cat";
    std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat& original): Animal(original), _brain(new Brain(*(original._brain)))
{
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat&    Cat::operator=(const Cat& rhs)
{
    if (this == &rhs)
        return (*this);
    Animal::operator=(rhs);
    delete _brain;
    _brain = new Brain(*rhs._brain);
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

void    Cat::setIdea(int index, const std::string& idea)
{
    if (index >= 0 && index <= 100)
        _brain->setIdea(index, idea);
    else
        std::cout << "Please enter an index from 0 to 100." << std::endl;
}

std::string Cat::getIdea(int index) const
{
    if (index >= 0 && index <= 100)
        return (_brain->getIdea(index));
    else
        std::cout << "Please enter an index from 0 to 100." << std::endl;
    return "";
}