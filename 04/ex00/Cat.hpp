/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/06 11:47:07 by arommers      #+#    #+#                 */
/*   Updated: 2023/10/09 12:04:38 by arommers      ########   odam.nl         */
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
        
        /* We should indicate that we intend to override a virtual function with the "overrride" keyword.
        This helps catch errors if the function being overridden doesn't actually exist in the base class.
        Sadly we aren't allowed to use this since it is not part of the c++98STD */
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