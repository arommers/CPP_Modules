/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/06 10:19:19 by arommers      #+#    #+#                 */
/*   Updated: 2023/10/08 11:46:43 by adri          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

#define GREEN "\x1b[32m"
#define RESET "\x1b[0m"

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
        
        virtual void    makeSound() const;
};


class WrongAnimal
{
    protected:
        std::string _type;
    public:
        WrongAnimal();
        WrongAnimal(const WrongAnimal& original);
        WrongAnimal& operator=(const WrongAnimal& rhs);
        virtual ~WrongAnimal();

        std::string getType() const;
        void    setType(std::string type);
        
        void    makeSound() const; // This is not a virtual function
};

#endif