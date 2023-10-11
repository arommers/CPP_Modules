/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: adri <adri@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/09 23:45:42 by adri          #+#    #+#                 */
/*   Updated: 2023/10/11 23:28:58 by adri          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

class ICharacter; // Forward declaration
#include "AMateria.hpp"
#include <iostream>

class ICharacter
{
public:
    virtual ~ICharacter() {}
    virtual std::string const & getName() const = 0;
    virtual void equip(AMateria* m) = 0;
    virtual void unequip(int idx) = 0;
    virtual void use(int idx, ICharacter& target) = 0;
};


class Character: public ICharacter
{
    private:
        std::string _name;
        int         _items;
        AMateria    *_inventory[4];
    public:
        static int      _index;
        static AMateria *_floor[100];
        
        Character(std::string name);
        Character(const Character& original);
        Character& operator=(const Character& rhs);
        ~Character();

        const std::string& getName() const;
        
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
};

#endif