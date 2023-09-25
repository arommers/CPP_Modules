/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: adri <adri@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/23 19:44:40 by adri          #+#    #+#                 */
/*   Updated: 2023/09/24 13:32:18 by adri          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string type): _type(type)
{
    std::cout << "Weapon constructed" << std::endl;
}

Weapon::~Weapon()
{
    std::cout << "Weapon deconstructed" << std::endl;
}

const std::string&  Weapon::getType() const
{
    return (this->_type);
}

void    Weapon::setType(const std::string& type)
{
    this->_type = type;
}