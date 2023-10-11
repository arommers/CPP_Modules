/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/09 14:11:12 by arommers      #+#    #+#                 */
/*   Updated: 2023/10/11 13:51:39 by adri          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMateria_HPP

#include <iostream>
#include "Character.hpp"

class AMateria
{
  protected:
    std::string   _type;
  public:
    AMateria(std::string const & type);
    AMateria(const AMateria& original);
    AMateria& operator=(const AMateria& rhs);
    ~AMateria();
    
    const std::string& getType() const;
    void    setType(const std::string type);

    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
};

#endif