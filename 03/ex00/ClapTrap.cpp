/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/02 15:11:14 by arommers      #+#    #+#                 */
/*   Updated: 2023/10/03 21:32:46 by adri          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _name("default"), _HitPoints(10), _Energy(10), _AttackDamage(0)
{
    std::cout << "Custom constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name)
{
    std::cout << "A ClapTrap named: " << name <<" has been constructed" << std::endl;
    this->_AttackDamage = 0;
    this->_HitPoints = 10;
    this->_Energy = 10;
}

ClapTrap::ClapTrap(const ClapTrap& copy)
{
    std::cout << "Copy constructor called" << std::endl;
    this->_name = copy._name;
    this->_HitPoints = copy._HitPoints;
    this->_Energy = copy._Energy;
    this->_AttackDamage = copy._AttackDamage;
}

ClapTrap::~ClapTrap()
{
    std::cout << "A ClapTrap named: " << this->_name <<" has been destructed" << std::endl;
}

// Assignment overload operator

ClapTrap& ClapTrap::operator=(const ClapTrap& rhs)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &rhs)
    {
        this->_name = rhs._name;
        this->_HitPoints = rhs._HitPoints;
        this->_Energy = rhs._Energy;
        this->_AttackDamage = rhs._AttackDamage;
    }
    return (*this);
}

// Getters

std::string  ClapTrap::getName()
{
    return (this->_name);
}

int  ClapTrap::getAttackDamage()
{
    return (this->_AttackDamage);
}

int  ClapTrap::getHitpoints()
{
    return (this->_HitPoints);
}

int  ClapTrap::getEnergy()
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
    if (this->getHitpoints() == 0)
    {
        std::cout <<  YELLOW << "We ask " << this->_name;
        std::cout << " to attack, but he doesn't react T_T" << RESET << std::endl;
        return ;
    }
    else if (this->getEnergy() == 0)
    {
        std::cout << CYAN << this->_name;
        std::cout << " tries to attack, but doesn't have enough energy to attack" << RESET << std::endl;
        return ;
    }
    std::cout <<  CYAN << this->_name;
    std::cout << " slaps " << target << " with a wet noodle for: ";
    std::cout << this->getAttackDamage() << " damage" << RESET << std::endl;
    this->_Energy--;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << RED << this->_name;
    std::cout << " took: " << amount << " points of damage!" << RESET << std::endl;
    this->_HitPoints -= amount;
    if (this->_HitPoints <= 0 || amount >= static_cast<unsigned int>(2147483647 - this->_HitPoints))
    {
        this->_HitPoints = 0;
        std::cout << this->_name << " is mucho dead" << std::endl;
    }
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (this->getHitpoints() == 0)
    {
        std::cout <<  YELLOW << "We ask " << this->_name;
        std::cout << " to repair, but he doesn't react T_T" << RESET << std::endl;
        return ;
    }
    else if (this->getEnergy() == 0)
    {
        std::cout <<  GREEN << this->_name;
        std::cout << " tries to repair, but doesn't have enough energy to repair" << RESET << std::endl;
        return ;
    }
    if (this->getHitpoints() == 10)
    {
        std::cout << GREEN << this->_name;
        std::cout << " tries to repair, but is already at full health!" << RESET << std::endl;
        return ;
    }
    std::cout << GREEN << this->_name;
    std::cout << " repairs itself for: " << amount;
    std::cout << " points of health" << RESET << std::endl;
    this->_HitPoints += amount;
    if (this->_HitPoints > 10)
        this->setHitpoints(10);
    this->_Energy--;
}

