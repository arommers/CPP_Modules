/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/02 15:11:14 by arommers      #+#    #+#                 */
/*   Updated: 2023/10/04 15:18:52 by arommers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap():
    _name("default"),
    _HitPoints(10),
    _Energy(10),
    _AttackDamage(0),
    _MaxHP(10)
{
    std::cout << "Base Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name):
    _name(name),
    _HitPoints(10),
    _Energy(10),
    _AttackDamage(0),
    _MaxHP(10)
{
    std::cout << "Base custom constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& original):
    _name(original._name),
    _HitPoints(original._HitPoints),
    _Energy(original._Energy),
    _AttackDamage(original._AttackDamage),
    _MaxHP(original._MaxHP)
{
    std::cout << "Copy constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Base destructor called" << std::endl;
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
        this->_MaxHP = rhs._MaxHP;
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


int ClapTrap::getMaxHP()
{
    return (this->_MaxHP);
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

void    ClapTrap::setMaxHP(int amount)
{
    this->_MaxHP = amount;
}

void    ClapTrap::setName(std::string name)
{
    this->_name = name;
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
    std::cout << " attacks " << target << " for: ";
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
    if (this->getHitpoints() >= this->_MaxHP)
    {
        std::cout << GREEN << this->_name;
        std::cout << " tries to repair, but is already at full health!" << RESET << std::endl;
        return ;
    }
    std::cout << GREEN << this->_name;
    std::cout << " repairs itself for: " << amount;
    std::cout << " points of health" << RESET << std::endl;
    this->_HitPoints += amount;
    if (this->_HitPoints > this->_MaxHP)
        this->setHitpoints(this->_MaxHP);
    this->_Energy--;
}

