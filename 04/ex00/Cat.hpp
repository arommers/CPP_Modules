/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/06 11:47:07 by arommers      #+#    #+#                 */
/*   Updated: 2023/10/06 17:00:40 by arommers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat: public Animal
{
    public:
        Cat();
        Cat(const Cat& original);
        Cat& operator=(const Cat& rhs);
        ~Cat();

        void    makeSound() const;
};

class WrongCat: public WrongAnimal
{
    public:
        WrongCat();
        WrongCat(const WrongCat& original);
        WrongCat& operator=(const WrongCat& rhs);
        ~WrongCat();

        void    makeSound() const;
};


#endif