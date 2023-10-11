/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: adri <adri@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/10 14:16:35 by adri          #+#    #+#                 */
/*   Updated: 2023/10/11 15:20:33 by adri          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

AMateria* Character::_floor[100] = {NULL};
int Character::_index = 0;

Character::Character(std::string name): _name(name), _items(0)
{
    for (int i = 0; i < 4; i++)
        _inventory[i] = NULL;   
}

Character::Character(const Character& original): _name(original._name), _items(original._items)
{
    for (int i = 0; i < 4; i++)
    {
        if (original._inventory)
            _inventory[i] = original._inventory[i]->clone();
        else
            _inventory[i] = NULL;
    }
}

Character& Character::operator=(const Character& rhs)
{
    if (this == &rhs)
        return(*this);
    _name = rhs._name;
    _items = rhs._items;
    for (int i = 0; i < 4; i++)
    {
        delete _inventory[i];
        _inventory[i] = rhs._inventory[i];
        if (_inventory[i])
            _inventory[i] = rhs._inventory[i]->clone();
    }
    return (*this);
}

// AMateria* originalPtr = new DerivedAMateria();
// AMateria* copiedPtr = originalPtr; // Both pointers now point to the same object

// delete originalPtr; // Deletes the object
// // Now, copiedPtr is a dangling pointer, pointing to a deleted object

// // Using clone():
// AMateria* originalPtr = new DerivedAMateria();
// AMateria* copiedPtr = originalPtr->clone(); // Creates a new, independent copy

// delete originalPtr; // Safe to delete the original object
// // copiedPtr still points to a valid, independent copy



Character::~Character()
{
    for (int i = 0; i < 4; i++)
        delete _inventory[i];
}

const std::string& Character::getName() const
{
    return(_name);
}

void Character::equip(AMateria* m)
{
    if (!m ||_items > 3)
        return;
    _inventory[_items] = m;
    _items++;
}

void Character::unequip(int idx)
{
    if (_inventory[idx] || idx >= 0 && idx < _items)
    {
        _floor[_index] = _inventory[idx];
        _inventory[idx] = NULL;
        for (int i = idx; idx < _items -1; i++)
            _inventory[i] = _inventory[i + 1];
        _inventory[_items - 1] = NULL;
        _items--;
        _index++;
    }
    return ;
}

void    Character::use(int idx, ICharacter& target)
{
    if (!_inventory[idx] || idx < 0 || idx >= _items)
        return ;
    _inventory[idx]->use(target);
}