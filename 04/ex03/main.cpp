/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: adri <adri@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/11 15:39:07 by adri          #+#    #+#                 */
/*   Updated: 2023/10/11 23:52:52 by adri          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "Source.hpp"
#include <stdio.h>

int main() {
    // Create a MateriaSource called "library"
    IMateriaSource* library = new MateriaSource();

    // Learn different types of Materias and store them in the library
    library->learnMateria(new Ice());
    library->learnMateria(new Cure());
    library->learnMateria(new Ice());
    library->learnMateria(new Cure());

    // Create a Character named "Cloud" and Sephiroth
    ICharacter* cloud = new Character("Cloud");
    ICharacter* sephiroth = new Character("Sephiroth");

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
    // Use equipped Materias
    for (int i = 0; i < 4; i++)
        cloud->use(i, *sephiroth); 

    // Clean up dynamically allocated memory
    delete library;
    delete cloud;
    delete sephiroth;
    
    // Clean up dynamically allocated memory for AMateria objects in _floor
    for (int i = 0; i < Character::_index; i++)
        delete Character::_floor[i];
    return 0;
}