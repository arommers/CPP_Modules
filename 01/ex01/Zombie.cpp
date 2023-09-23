/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: adri <adri@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/21 10:18:34 by adri          #+#    #+#                 */
/*   Updated: 2023/09/23 11:05:27 by adri          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
    this->_name = "zombie";
     std::cout << this->_name << " constructed" << std::endl;
}

Zombie::Zombie(std::string name)
{
    this->_name = name;
    std::cout << this->_name << " constructed" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << this->_name << " deconstructed" << std::endl; 
}

void    Zombie::setName(std::string name, int index)
{
    this->_name = name + std::to_string(index);
}

void    Zombie::announce()
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}