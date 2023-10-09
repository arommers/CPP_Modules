/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: adri <adri@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/08 10:59:45 by adri          #+#    #+#                 */
/*   Updated: 2023/10/08 12:40:06 by adri          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

// int main()
// {
//     std::cout << GREEN << "PLEASE CHECK THE ORDER OF CONSTRUCTION" << RESET << std::endl;
//     std::cout << std::endl;
    
// //  Creating an array of animals, half dogs, half cats

//     Animal  *animals[4];
//     int i = 0;

//     while (i < 4)
//     {
//         if (i % 2 == 0)
//             animals[i] = new Cat();
//         else
//             animals[i] = new Dog();
//         i++;
//     }
//     std::cout << std::endl;
//     std::cout << GREEN << "PLEASE CHECK THAT THE ARRAY CONTAINS DIFFERENT ANIMALS" << RESET << std::endl;
//     std::cout << std::endl;
//     i = 0;
//     while (i < 4)
//         animals[i++]->makeSound();
//     std::cout << std::endl;
//     std::cout << GREEN << "PLEASE CHECK THE ORDER OF DESTRUCTION" << RESET << std::endl;
//     std::cout << std::endl;
//     i = 0;
//     while (i < 4)
//         delete animals[i++];
//     return (0);
// }

int main()
{
    Cat ogCat;
    int i = 0;
    
    // Filling the ideas array
    while (i < 6)
    {
        if (i % 2 == 0)
            ogCat.setIdea(i, "mmmm snacks");
        else
            ogCat.setIdea(i, "mmmm catnaps");
        i++;
    }
    
    // Making a deep copy
    Cat cpyCat = ogCat;
    for (int x = 0; x < 6; x++)
        cpyCat.setIdea(x, "gotta go zooooommmm!!");
    std::cout << std::endl;
    std::cout << GREEN << "Example of a deep copy." << RESET << std::endl;
    std::cout << std::endl;

    for (int j = 0; j < 6; j++)
        std::cout << "ogCat thinks: " << ogCat.getIdea(j) << std::endl;
    std::cout << std::endl;
    for (int k = 0; k < 6; k++)
        std::cout << "cpyCat thinks: " << cpyCat.getIdea(k) << std::endl;
    std::cout << std::endl;
    
        
    return (0);
}
