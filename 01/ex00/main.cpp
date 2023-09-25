/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: adri <adri@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/22 20:42:41 by adri          #+#    #+#                 */
/*   Updated: 2023/09/22 21:08:54 by adri          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    std::string Chump = "Chump";
    std::string Heap = "Heap";
    Zombie*     heapzombie;
    
    randomChump(Chump);
    heapzombie = newZombie(Heap);
    heapzombie->announce();
    delete heapzombie;
    return (0);
}