/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cure.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/09 14:28:20 by arommers      #+#    #+#                 */
/*   Updated: 2023/10/11 13:59:39 by adri          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(): AMateria("cure")
{
}

Cure::Cure(const Cure& original): AMateria(original)
{
}

Cure::~Cure()
{
}

Cure&   Cure::operator=(const Cure& rhs)
{
    if (this == &rhs)
        return (*this);
    AMateria::operator=(rhs);
    return (*this);
}

Cure*   Cure::clone() const
{
    Cure    *cpy = new Cure(*this);
    return (cpy);
}

void    Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}