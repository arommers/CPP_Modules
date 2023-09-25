/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: adri <adri@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/23 20:11:16 by adri          #+#    #+#                 */
/*   Updated: 2023/09/24 13:47:34 by adri          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const std::string name, const Weapon& weapon): _name(name), _weapon(weapon)
{
    std::cout << "HumanA constructed" << std::endl;
}

HumanA::~HumanA()
{
    std::cout << "HumanA deconstructed" << std::endl;
}

void    HumanA::attack()
{
    std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}
