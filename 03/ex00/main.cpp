/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: adri <adri@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/02 22:27:49 by adri          #+#    #+#                 */
/*   Updated: 2023/10/03 16:46:03 by adri          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap    claptrap("claptrap");
    ClapTrap    dummy("training dummy");

    // Claptrap uses member functions

    std::cout << std::endl;
    claptrap.attack(dummy.getName());
    dummy.takeDamage(0);
    dummy.beRepaired(1);
    std::cout <<std::endl;
    std::cout << claptrap.getName() << "'s current energy is: "<< claptrap.getEnergy() << std::endl;
    std::cout << dummy.getName() << "'s current hitpoints are: " << dummy.getHitpoints()<< std::endl;
    std::cout <<std::endl;

    //Claptrap repairs itself while full health
    claptrap.beRepaired(4);
    std::cout << claptrap.getName() << "'s current hitpoints are: " << claptrap.getHitpoints()<< std::endl;
    std::cout << std::endl;

    // // Claptrap tries to attack with 0 energy point
    std::cout << RED << "Ow no! claptrap is suffering a bout of depression and all his energy has depleted!" << RESET << std::endl;
    claptrap.setEnergy(0);
    std::cout << claptrap.getName() << "'s current energy is: "<< claptrap.getEnergy() << std::endl;
    claptrap.attack("training dummy");

    // // Claptrap tries to repair with 0 energy points
    claptrap.beRepaired(2);
    std::cout <<std::endl;
    
    // Claptrap dies
    std::cout << ORANGE << dummy.getName() << " pounces on the prone " << claptrap.getName();
    std::cout << " and critically hits him for: 3147483647 damage!!!" << RESET << std::endl;
    claptrap.takeDamage(3147483647);
    std::cout << claptrap.getName() << "'s current hitpoints are: " << claptrap.getHitpoints()<< std::endl;
    std::cout << std::endl;

    // We try and force him to do stuff with 0 hitpoints
    claptrap.attack(dummy.getName());
    claptrap.beRepaired(10);
    std::cout << std::endl;

    return (0);
}