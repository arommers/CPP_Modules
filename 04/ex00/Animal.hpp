/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/06 10:19:19 by arommers      #+#    #+#                 */
/*   Updated: 2023/10/06 12:19:31 by arommers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

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

#endif