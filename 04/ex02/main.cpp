/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: adri <adri@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/08 10:59:45 by adri          #+#    #+#                 */
/*   Updated: 2023/10/09 12:59:59 by arommers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    // const Animal animal; " *** Check if an abstract class can actually be instantiated *** "
    const Dog* dog = new Dog();
    const Cat* cat = new Cat();
    std::cout << std::endl;
    std::cout << GREEN << "The derived classes actually execute their version of the pure virtual function makeNoise() = 0";
    std::cout << RESET << std::endl;
    
    const Animal  *animals[] =
    {
        dog,
        cat
    };
    std::cout << std::endl;
    for(int i = 0; i < 2; i++)
    {
        animals[i]->makeSound();
    }
    std::cout << std::endl;

    delete cat;
    delete dog;
    std::cout << std::endl;

    std::cout << GREEN << "Let's also check if we can instantiate an abstract base class." << std::endl;
    std::cout << "And see what happens when we don't override the pure virtual function of the base class." << RESET << std::endl;
    std::cout << std::endl;
    return (0);
}
