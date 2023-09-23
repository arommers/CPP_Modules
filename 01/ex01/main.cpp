/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: adri <adri@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/23 10:47:33 by adri          #+#    #+#                 */
/*   Updated: 2023/09/23 10:54:48 by adri          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    int size = 10;
    Zombie* horde = zombieHorde(size, "zombie");
    for (int i = 0; i < size; i++)
        horde[i].announce();
    delete[] horde;
    return (0);
}