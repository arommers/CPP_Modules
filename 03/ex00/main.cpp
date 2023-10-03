/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: adri <adri@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/02 22:27:49 by adri          #+#    #+#                 */
/*   Updated: 2023/10/03 11:12:18 by adri          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap    claptrap("claptrap");

    // Claptrap uses member functions

    std::cout << std::endl;
    claptrap.attack("training dummy");
    claptrap.beRepaired(1);
    claptrap.takeDamage(4);
    std::cout <<std::endl;
    std::cout << claptrap.getName() << "'s current energy is: "<< claptrap.getEnergy() << std::endl;
    std::cout << claptrap.getName() << "'s current hitpoints are: " << claptrap.getHitpoints()<< std::endl;
    std::cout <<std::endl;

    //Claptrap repairs itself
    claptrap.beRepaired(4);
    std::cout << claptrap.getName() << "'s current hitpoints are: " << claptrap.getHitpoints()<< std::endl;
    std::cout << std::endl;


    // // Claptrap tries to attack with 0 energy point
    std::cout << RED << "Ow no! claptrap is suffering a bout of depression and all his energy has depleted!" << RESET << std::endl;
    claptrap.setEnergy(0);
    std::cout << claptrap.getName() << "'s current energy is: "<< claptrap.getEnergy() << std::endl;
    claptrap.attack("training dummy");
    std::cout <<std::endl;

    // // Claptrap tries to repair with 0 energy points
    claptrap.beRepaired(2);
    std::cout <<std::endl;
    
    // Claptrap dies
    claptrap.takeDamage(3147483647);
    std::cout << claptrap.getName() << "'s current hitpoints are: " << claptrap.getHitpoints()<< std::endl;
    std::cout <<std::endl;

    return (0);
}