/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: adri <adri@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/24 12:45:16 by adri          #+#    #+#                 */
/*   Updated: 2023/09/24 14:08:00 by adri          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
    Weapon club = Weapon("crude spiked club");
    HumanA bob("Bob", club);
    bob.attack();
    club.setType("some other type of club");
    bob.attack();

    Weapon sword = Weapon("crude spiked sword");
    HumanB jim("Jim");
    jim.setWeapon(sword);
    jim.attack();
    sword.setType("some other type of sword");
    jim.attack();
    return (0);
}
