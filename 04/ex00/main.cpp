/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/06 11:57:51 by arommers      #+#    #+#                 */
/*   Updated: 2023/10/08 11:47:06 by adri          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    // Test proper derived polymorpism
    std::cout << GREEN << "PLEASE CHECK THAT THE BASE CLASS AND DERIVED CLASSES HAVE ACCURATE TYPES AND SOUNDS!" << RESET << std::endl;
    std::cout << std::endl;
    const Animal* base = new Animal();
    std::cout << "Type: ";
    std::cout << base->getType() << ". ";
    std::cout << "Sound: ";
    base->makeSound();
    std::cout << std::endl;
    
    const Animal* dog = new Dog();
    std::cout << "Type: ";
    std::cout << dog->getType() << ". ";
    std::cout << "Sound: ";
    dog->makeSound();
    std::cout << std::endl;

    const Animal* cat = new Cat();
    std::cout << "Type: ";
    std::cout << cat->getType() << ". ";
    std::cout << "Sound: ";
    cat->makeSound();
    std::cout << std::endl;
    
    // Testing an array of Animals to make sure they pick the correct function
    std::cout << GREEN << "SAME THING BUT THIS TIME FROM AN ARRAY" << RESET << std::endl;
    
    const Animal  *animals[] =
    {
        base,
        dog,
        cat
    };
    std::cout << std::endl;

    for(int i = 0; i < 3; i++)
    {
        animals[i]->makeSound();
    }
    std::cout << std::endl;

    delete cat;
    delete dog;
    delete base;
    std::cout << std::endl;

    // Test a derived class with improper polymorphism
    std::cout << GREEN << "PLEASE CHECK THAT THE BASE CLASS AND DERIVED CLASS MAKE THE SAME SOUNDS!" << RESET << std::endl;
    std::cout << std::endl;

    const WrongAnimal* wronganimal = new WrongAnimal();
    std::cout << "Type: ";
    std::cout << wronganimal->getType() << ". ";
    std::cout << "Sound: ";
    wronganimal->makeSound();
    std::cout << std::endl;
    
    const WrongAnimal* wrongcat = new WrongCat();
    std::cout << "Type: ";
    std::cout << wrongcat->getType() << ". ";
    std::cout << "Sound: ";
    wrongcat->makeSound();
    std::cout << std::endl;


    delete wrongcat;
    delete wronganimal;
    std::cout << std::endl;
    return (0);
}