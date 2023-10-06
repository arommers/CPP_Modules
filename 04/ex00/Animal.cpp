/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/06 10:24:10 by arommers      #+#    #+#                 */
/*   Updated: 2023/10/06 17:43:01 by arommers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

//  Animal function definitions

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
    std::cout << "What kind of sound do you expect something unspecified to make?" << std::endl;
}

// The Wrong Animal function definitions

WrongAnimal::WrongAnimal(): _type("unspecified")
{
    std::cout << "Wrong Base default constructor called." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& original): _type(original._type)
{
    std::cout << "Wrong Base copy constructor called." << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& rhs)
{
    std::cout << "Wrong Assignment operator overload called." << std::endl;
    if (this == &rhs)
        return (*this);
    _type = rhs._type;
    return (*this);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Wrong Base destructor called." << std::endl;
}

void    WrongAnimal::setType(std::string type)
{
    _type = type;
}

std::string WrongAnimal::getType() const
{
    return (_type);
}

void    WrongAnimal::makeSound() const
{
    std::cout << "!@#$%^&*()_+ AAAHH I'm an abomination!!! !@#$%^&*()_+" << std::endl;
}