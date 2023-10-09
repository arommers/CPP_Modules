/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Ice.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/09 15:33:35 by arommers      #+#    #+#                 */
/*   Updated: 2023/10/09 16:27:51 by arommers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(): AMateria("ice")
{
    std::cout << "Ice constructor called" << std::endl;
}

Ice::Ice(const Ice& original): AMateria(original)
{
    std::cout << "Ice copy constructor called" << std::endl;
}

Ice&    Ice::operator=(const Ice& rhs)
{
    if (this == &rhs)
        return (*this);
    AMateria::operator=(rhs);
    std::cout << "Assignment overload operator called" << std::endl;
    return (*this);
}

Ice::~Ice()
{
    std::cout << "Ice destructor called" << std::endl;
}

Ice* Ice::clone() const
{
    new Ice(*this);
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at *" << target.getname() << std::endl;
}