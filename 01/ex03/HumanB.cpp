/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: adri <adri@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/23 20:43:01 by adri          #+#    #+#                 */
/*   Updated: 2023/09/24 12:43:56 by adri          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name), _weaponPtr(nullptr)
{
    std::cout << "HumanB constructed" << std::endl;
}

HumanB::~HumanB()
{
    std::cout << "HumanB deconstructed" << std::endl;
}

void    HumanB::attack()
{
    if (this->_weaponPtr)
        std::cout << this->_name << " attacked with their " << this->_weaponPtr->getType() << std::endl;
    else
        std::cout << this->_name << " says: time for fisticuffs!"  << std::endl;
}

void    HumanB::setWeapon(Weapon& weapon)
{
    this->_weaponPtr = &weapon;
}