/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/06 11:57:51 by arommers      #+#    #+#                 */
/*   Updated: 2023/10/06 12:26:47 by arommers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "stdio.h"

int main()
{
    std::cout << std::endl;
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << std::endl;

    std::cout << j->getType() << " :";
    j->makeSound();
    std::cout << i->getType() << " :";
    i->makeSound();
    std::cout << meta->getType() << " :";
    meta->makeSound();
    std::cout << std::endl;

    delete i;
    delete j;
    delete meta;
    std::cout << std::endl;
    
    return (0);
}