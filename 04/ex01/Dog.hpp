/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/06 10:38:55 by arommers      #+#    #+#                 */
/*   Updated: 2023/10/06 12:13:07 by arommers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog: public Animal
{
    public:
        Dog();
        Dog(const Dog& original);
        Dog& operator=(const Dog& rhs);
        ~Dog();
        
        void makeSound() const;
};

#endif