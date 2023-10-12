/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: adri <adri@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/11 15:39:07 by adri          #+#    #+#                 */
/*   Updated: 2023/10/12 11:48:03 by arommers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "Source.hpp"
#include <stdio.h>

int main()
{
    // Create a MateriaSource called "library"
    IMateriaSource* library = new MateriaSource();

    
    // Learn different types of Materias and store them in the library
    library->learnMateria(new Ice());
    library->learnMateria(new Cure());

    
    // Create a Character named Cloud and Sephiroth
    ICharacter* cloud = new Character("Cloud");
    ICharacter* sephiroth = new Character("Sephiroth");


    // Try and create a materia that is not stored in the library
    // AMateria* fire = library->createMateria("fire");
    // cloud->equip(fire);
    
    // Equip Materias from the library to Cloud
    for (int i = 0; i < 4; i++)
    {
        AMateria* materia;
        if (i % 2 == 0)
            materia = library->createMateria("ice");
        else
            materia = library->createMateria("cure");
        if (materia)
            cloud->equip(materia);
    }

    // Using the copy constructor to make a deep copy of a character
    // ICharacter* cpy = dynamic_cast<Character *>(cloud);
    // for (int i = 0; i < 4; i++)
    //     cpy->use(i, *cloud); 
        
    // Use the overloaded assignment operator to copy "cloud"
    // ICharacter* cpy = new Character("Cpy");
    // *dynamic_cast<Character *>(cpy) = *dynamic_cast<Character *>(cloud);
    // for (int i = 0; i < 4; i++)
    //     cpy->use(i, *cloud);
    // delete cpy;

    // Try and equip a materia when the inventory is full
    // AMateria* ice = new Ice;
    // cloud->equip(ice);
    // delete ice;

    // Unequip all materia
    // for (int i = 0; i < 4; i++)
    //     cloud->unequip(0);

    // Use equipped Materias (Also checking for unequipped materia)
    for (int i = 0; i < 4; i++)
        cloud->use(i, *sephiroth); 

    // Clean up dynamically allocated memory
    delete library;
    delete cloud;
    delete sephiroth;
    
    // Clean up dynamically allocated memory for AMateria objects in/on _floor
    for (int i = 0; i < Character::_index; i++)
        delete Character::_floor[i];
    return 0;
}