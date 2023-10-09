/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/09 14:11:21 by arommers      #+#    #+#                 */
/*   Updated: 2023/10/09 15:37:41 by arommers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type): _type(type)
{
    std::cout << "Constructor called" << std::endl;
}

AMateria::AMateria(const AMateria& original): _type(original._type)
{
    std::cout << "Copy constructor called" << std::endl;
}

AMateria&   AMateria::operator=(const AMateria& rhs)
{
    if (this == &rhs)
        return (*this);
    this->_type = rhs._type;
    std::cout << "Assignment overload Constructor called" << std::endl;
    return (*this);
}

AMateria::~AMateria()
{
    std::cout << "Destructor called" << std::endl;
}

const std::string& AMateria::getType() const
{
    return (_type);
}

void    AMateria::setType(const std::string type)
{
    _type = type;
}
