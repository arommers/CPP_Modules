/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/05 10:05:12 by arommers      #+#    #+#                 */
/*   Updated: 2023/10/05 11:40:02 by arommers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    ClapTrap    claptrap("ClapTrap");
    FragTrap    fragtrap("FragTrap");
    FragTrap    frag2("FragTrap");

    std::cout << std::endl;
    std::cout << fragtrap.getName() << " data:" << std::endl;
    std::cout << "Hitpoints: " << fragtrap.getHitpoints() << std::endl;
    std::cout << "Energy: " << fragtrap.getEnergy() << std::endl;
    std::cout << "AD: " << fragtrap.getAttackDamage() << std::endl;

    frag2.setEnergy(0);
    frag2.setAttackDamage(0);
    frag2.setHitpoints(0);
    frag2.setName("poop");

    fragtrap = frag2;
    std::cout << std::endl;

    std::cout << fragtrap.getName() << " data:" << std::endl;
    std::cout << "Hitpoints: " << fragtrap.getHitpoints() << std::endl;
    std::cout << "Energy: " << fragtrap.getEnergy() << std::endl;
    std::cout << "AD: " << fragtrap.getAttackDamage() << std::endl;
    std::cout << std::endl;

    // // Check if the construction order is correct Base > Derived
    // std::cout << "Hey Everyone we've got a new challenger! ";
    // std::cout << fragtrap.getName() << " !!!" << std::endl;
    // std::cout << std::endl;
    // std::cout << RED << "Hey eval person. Could you please check that I was constructed properly?" << RESET;
    // std::cout << std::endl;
    // std::cout << std::endl;
    // std::this_thread::sleep_for(std::chrono::seconds(3));
    
    // // Check if fragtrap is indeed initialized with different values from claptrap
    // std::cout << CYAN << "Wow, I have just been given sentience." << RESET << std::endl;
    // fragtrap.highFivesGuys();
    // std::this_thread::sleep_for(std::chrono::seconds(1));
    // std::cout << CYAN <<  "lets see how awesome I actually am." << std::endl;
    // std::cout << "... Getting fragtrap's data ..." << RESET << std::endl;
    // std::this_thread::sleep_for(std::chrono::seconds(1));

    // std::cout << std::endl;
    // std::cout << "Fragtrap's stats: " << std::endl;
    // std::cout << "- " << fragtrap.getHitpoints() << " hit points," << std::endl;
    // std::cout << "- " << fragtrap.getEnergy() << " energy points," << std::endl;
    // std::cout << "- " << fragtrap.getAttackDamage() << " attack points. " << std::endl;
    // std::cout << std::endl;

    // std::cout << CYAN << "Now let's how much better than Claptrap I actually am!" << std::endl;
    // std::cout << "... Getting claptrap's data ..." << RESET << std::endl;
    // std::cout << std::endl;
    // std::this_thread::sleep_for(std::chrono::seconds(1));
    // std::cout << "Claptrap's stats: " << std::endl;
    // std::cout << "- " << claptrap.getHitpoints() << " hit points," << std::endl;
    // std::cout << "- " << claptrap.getEnergy() << " energy points," << std::endl;
    // std::cout << "- " << claptrap.getAttackDamage() << " attack points. " << std::endl;
    // std::cout << CYAN << "Told ya I'm awesome." << RESET << std::endl;
    // std::cout << std::endl;
    
    // std::this_thread::sleep_for(std::chrono::seconds(3));

    // // Check if the copy constructor works properly
    // std::cout << CYAN << "mmmm, what else can we do?!" << std::endl;
    // std::this_thread::sleep_for(std::chrono::seconds(1));
    // std::cout << "I know. Since I'm so awesome we should clone me!" << RESET << std::endl;
    // std::cout << std::endl;
    
    // FragTrap    clone(fragtrap);
    
    // std::cout << std::endl;
    // std::this_thread::sleep_for(std::chrono::seconds(1));
    // std::cout << CYAN <<  "lets see how awesome I am once more." << std::endl;
    // std::cout << "Getting " << clone.getName()  << " data..." << RESET << std::endl;
    // std::this_thread::sleep_for(std::chrono::seconds(1));

    // std::cout << std::endl;
    // std::cout << "Clone's stats: " << std::endl;
    // std::cout << "- " << clone.getHitpoints() << " hit points," << std::endl;
    // std::cout << "- " << clone.getEnergy() << " energy points," << std::endl;
    // std::cout << "- " << clone.getAttackDamage() << " attack points. " << std::endl;
    // std::cout << std::endl;

    // std::cout << CYAN << "Still pretty awesome!" << RESET << std::endl;
    // std::this_thread::sleep_for(std::chrono::seconds(1));

    // // Check destructor order
    // std::cout << std::endl;
    // std::cout << RED << "Okay this is gonna get pretty morbid, but could you check if we die in the proper order";
    // std::cout << RESET << std::endl;
    // std::cout << std::endl;

    return (0);
}