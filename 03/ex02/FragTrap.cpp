/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: adri <adri@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/04 21:36:55 by adri          #+#    #+#                 */
/*   Updated: 2023/10/05 10:36:01 by arommers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap()
{
    _name = "default";
    _HitPoints = 100;
    _Energy = 100;
    _AttackDamage = 30;
    _MaxHP = 100;
    std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
    _name = name;
    _HitPoints = 100;
    _Energy = 100;
    _AttackDamage = 30;
    _MaxHP = 100;
    std::cout << "FragTrap custom constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& original): ClapTrap(original)
{
    std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap&   FragTrap::operator=(const FragTrap& rhs)
{
    if (this != &rhs)
    {
        _name = rhs._name;
        _HitPoints = rhs._HitPoints;
        _Energy = rhs._Energy;
        _AttackDamage = rhs._AttackDamage;
        _MaxHP = rhs._MaxHP;
    }
    return (*this);
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called" << std::endl;
}

void    FragTrap::highFivesGuys()
{
    std::cout << CYAN << "Can I get some high fives!!!" << RESET << std::endl;
}