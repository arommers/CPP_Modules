/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: adri <adri@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/21 10:18:34 by adri          #+#    #+#                 */
/*   Updated: 2023/09/22 21:09:54 by adri          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    this->_name = name;
    std::cout << this->_name << " constructed" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << this->_name << " deconstructed" << std::endl; 
}

void    Zombie::announce()
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}