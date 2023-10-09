/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/06 10:19:19 by arommers      #+#    #+#                 */
/*   Updated: 2023/10/09 12:25:10 by arommers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

#define GREEN "\x1b[32m"
#define RESET "\x1b[0m"

    /*  Any class containing at least one pure virtual function becomes an abstract class
        If derived classes dont' override the pure virtual function of the base class,
        they become abstract classes themselves. 
        
        You can't instantiate an object of an abstract class
        The opposite of an abstract class is a concrete class   */

class   Animal
{
    protected:
        std::string _type;
    public:
        Animal();
        Animal(const Animal& original);
        Animal& operator=(const Animal& rhs);
        virtual ~Animal();

        std::string getType() const;
        void    setType(std::string type);
        

        // Pure virtual function
        virtual void    makeSound() const = 0;
        
        // 0 tells the compiler that any class inheriting from the class containing this declaration
        // must provide its own implementation of makeSound(). 
};

#endif