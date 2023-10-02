/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/02 15:11:14 by arommers      #+#    #+#                 */
/*   Updated: 2023/10/02 15:50:34 by arommers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name)
{
    std::cout << "A ClapTrap named: " << name <<"has been constructed" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "A ClapTrap named: " << this->_name <<"has been constructed" << std::endl;
}

// Getters

std::string  ClapTrap::getName()
{
    return (this->_name);
}

size_t  ClapTrap::getAttackDamage()
{
    return (this->_AttackDamage);
}

size_t  ClapTrap::getHitpoints()
{
    return (this->_HitPoints);
}

size_t  ClapTrap::getEnergy()
{
    return (this->_Energy);
}

// Setters

void    ClapTrap::setAttackDamage(int amount)
{
    this->_AttackDamage = amount;
}

void    ClapTrap::setEnergy(int amount)
{
    this->_Energy= amount;
}

void    ClapTrap::setHitpoints(int amount)
{
    this->_HitPoints = amount;
}

// Member functions
void    ClapTrap::attack(const std::string& target)
{
    if (this->getEnergy() == 0)
    {
        std::cout << "A Claptrap named: " << this->_name;
        std::cout << " doesn't have the energy to attack" << std::endl;
        return ;
    }
    std::cout << "A Claptrap named: " << this->_name;
    std::cout << " Slaps " << target << " with a wet noodle for: ";
    std::cout << this->getAttackDamage() << std::endl;
    this->_Energy--;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "A Claptrap named: " << this->_name;
    std::cout << " took: " << amount << " points of damage!" << std::endl;
    this->_HitPoints -= amount;
    if (this->_HitPoints == 0);
        std::cout << "A Claptrap named: " << this->_name << " fainted!";
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (this->getEnergy() == 0)
    {
        std::cout << "A Claptrap named: " << this->_name;
        std::cout << " doesn't have the energy to repair" << std::endl;
        return ;
    }
    std::cout << "A Claptrap named: " << this->_name;
    std::cout << " repairs itself for: " << amount;
    std::cout << " points of health" << std::endl;
    this->_HitPoints += amount;
    this->_Energy--;
}

