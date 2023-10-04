/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/04 11:38:34 by arommers      #+#    #+#                 */
/*   Updated: 2023/10/04 15:51:39 by arommers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ClapTrap    claptrap("ClapTrap");
    ScavTrap    scavtrap("ScavTrap");

    std::cout << std::endl;
    std::cout << "In our right hand corner, coming in at: " << std::endl;
    std::cout << "- " << claptrap.getHitpoints() << " hit points," << std::endl;
    std::cout << "- " << claptrap.getEnergy() << " energy points," << std::endl;
    std::cout << "- " << claptrap.getAttackDamage() << " attack points. " << std::endl;
    std::cout << "A murder crazed robot called: " << CYAN << "[ " << claptrap.getName() << " ] !!!!"<< RESET << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(3));
    std::cout << std::endl;
    std::cout << "In the opposite corner, fueled by: " << std::endl;
    std::cout << "- " << scavtrap.getHitpoints() << " hit points," << std::endl;
    std::cout << "- " << scavtrap.getEnergy() << " energy points," << std::endl;
    std::cout << "- " << scavtrap.getAttackDamage() << " attack points. " << std::endl;
    std::cout << " and nothing but violent rage: " << ORANGE << "[ " << scavtrap.getName() << " ] !!!!" << RESET << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(3));
    std::cout << std::endl;
    std::cout << "Ladies and gentleman.... It's time to get ready for: " << std::endl;
    std::cout << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(3));
    std::cout << RED << "***** [ !!!!!! MORTAL KOMBAT !!!!!! ] *****" << RESET << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(3));

    // Claptrap uses standard member functions
    std::cout << std::endl;
    claptrap.attack(scavtrap.getName());
    scavtrap.takeDamage(claptrap.getAttackDamage());
    std::cout <<std::endl;
    std::cout << claptrap.getName() << "'s current energy is: "<< claptrap.getEnergy() << std::endl;
    std::cout << scavtrap.getName() << "'s current hitpoints are: " << scavtrap.getHitpoints() << std::endl;
    std::cout <<std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(1));

    // Scavtrap repairs itself while full health
    scavtrap.beRepaired(4);
    std::cout << scavtrap.getName() << "'s current hitpoints are: " << scavtrap.getHitpoints()<< std::endl;
    std::cout << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(1));

    // Claptrap tries to attack with 0 energy point
    std::cout << RED << "Claptrap's wet noodle attack left him exhausted. All his energy has depleted!" << RESET << std::endl;
    claptrap.setEnergy(0);
    std::cout << claptrap.getName() << "'s current energy is: "<< claptrap.getEnergy() << std::endl;
    claptrap.attack("training scavtrap");
    std::this_thread::sleep_for(std::chrono::seconds(1));

    // Claptrap tries to repair with 0 energy points
    claptrap.beRepaired(2);
    std::cout <<std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(1));
    
    // ScavTrap attacks and Claptrap dies
    scavtrap.attack(claptrap.getName());
    claptrap.takeDamage(scavtrap.getAttackDamage());
    std::cout << claptrap.getName() << "'s current hitpoints are: " << claptrap.getHitpoints()<< std::endl;
    std::cout << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(1));

    // We try and force him to do stuff with 0 hitpoints
    claptrap.attack(scavtrap.getName());
    claptrap.beRepaired(10);
    std::cout << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(1));

    // Scavtrap struts in victory
    std::cout << ORANGE << "Scavtrap looms over the limp body of " << claptrap.getName() << ". " << std::endl;
    std::cout << "Standing victorious, with nothing to fear, " << RESET;
    scavtrap.guardGate();
    std::cout << std::endl;

    return (0);
}