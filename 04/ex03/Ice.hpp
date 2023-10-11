/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Ice.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/09 14:27:54 by arommers      #+#    #+#                 */
/*   Updated: 2023/10/11 22:30:40 by adri          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice: public AMateria
{
    public:
        Ice();
        Ice(const Ice& orginal);
        Ice& operator=(const Ice& rhs);
        ~Ice();

        Ice* clone() const;
        void use(ICharacter& target);
};

#endif