/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: adri <adri@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/03 20:45:12 by adri          #+#    #+#                 */
/*   Updated: 2023/10/04 15:19:10 by arommers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
    this->_name = "default";
    this->_HitPoints = 100;
    this->_Energy = 50;
    this->_AttackDamage = 20;
    this->_MaxHP = 100;
    _GuardMode = false;
    std::cout << "Derived Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
    this->_name = name;
    this->_HitPoints = 100;
    this->_Energy = 50;
    this->_AttackDamage = 20;
    this->_MaxHP = 100;
    _GuardMode = false;
    std::cout << "Derived custom constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& original): ClapTrap(original)
{
    *this = original;
    std::cout << "Copy constructor called" << std::endl;
}

ScavTrap&   ScavTrap::operator=(const ScavTrap& rhs)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &rhs)
    {
        ClapTrap::operator=(rhs);
        this->_GuardMode = rhs._GuardMode;
    }
    return (*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << "Derived destructor called" << std::endl;
}

void    ScavTrap::guardGate()
{
    std::cout << "A ScavTrap named: " << this->getName();
    std::cout << " is now in gate keeper mode." << std::endl;
    this->_GuardMode = true;
}

