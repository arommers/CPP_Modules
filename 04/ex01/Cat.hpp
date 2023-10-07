/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/06 11:47:07 by arommers      #+#    #+#                 */
/*   Updated: 2023/10/07 12:40:26 by adri          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
    private:
        Brain*  _brain;
    public:
        Cat();
        Cat(const Cat& original);
        Cat& operator=(const Cat& rhs);
        ~Cat();

        void    makeSound() const;
};

#endif