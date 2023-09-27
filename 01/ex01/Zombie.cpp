/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: adri <adri@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/21 10:18:34 by adri          #+#    #+#                 */
/*   Updated: 2023/09/27 11:32:06 by arommers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//  Default constructor

Zombie::Zombie()
{
    this->_name = "zombie";
     std::cout << this->_name << " constructed" << std::endl;
}

// // Custom constructor

// Zombie::Zombie(std::string name)
// {
//     this->_name = name;
//     std::cout << this->_name << " constructed" << std::endl;
// }

// // Default deconstructor

Zombie::~Zombie()
{
    std::cout << this->_name << " deconstructed" << std::endl; 
}

// Function to set the name of the zombie with an index

void    Zombie::setName(std::string name)
{
    this->_name = name;
}

void    Zombie::announce()
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}