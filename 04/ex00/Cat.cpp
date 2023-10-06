/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/06 11:50:54 by arommers      #+#    #+#                 */
/*   Updated: 2023/10/06 17:44:07 by arommers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// Cat

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

// Wrong Cat

WrongCat::WrongCat(): WrongAnimal()
{
    _type = "WrongCat";
    std::cout << "Wrong Cat constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& original): WrongAnimal(original)
{
    std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat&    WrongCat::operator=(const WrongCat& rhs)
{
    std::cout << "WrongCat assignment operator overload called" << std::endl;
    if (this == &rhs)
        return (*this);
    WrongAnimal::operator=(rhs);
    return (*this);
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called" << std::endl;
}

void    WrongCat::makeSound() const
{
    std::cout << "meow meow meow" << std::endl;
}
