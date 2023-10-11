/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cure.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/09 14:28:12 by arommers      #+#    #+#                 */
/*   Updated: 2023/10/11 13:56:34 by adri          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class Cure: public AMateria
{
    public:
        Cure();
        Cure(const Cure& orginal);
        Cure& operator=(const Cure& rhs);
        ~Cure();

        Cure* clone() const;
        void use(ICharacter& target);
};

#endif