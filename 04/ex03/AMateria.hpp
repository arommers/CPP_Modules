/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/09 14:11:12 by arommers      #+#    #+#                 */
/*   Updated: 2023/10/11 23:28:22 by adri          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

class AMateria; // Forward declaration
#include "Character.hpp"
#include <iostream>
#include <string>

#define GREEN "\x1b[32m"
#define RESET "\x1b[0m"

class AMateria
{
  protected:
    std::string   _type;
  public:
    AMateria(std::string const & type);
    AMateria(const AMateria& original);
    AMateria& operator=(const AMateria& rhs);
    virtual ~AMateria();
    
    const std::string& getType() const;
    void    setType(const std::string type);

    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
};

#endif