/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Source.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: adri <adri@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/11 14:18:40 by adri          #+#    #+#                 */
/*   Updated: 2023/10/11 23:54:22 by adri          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Source.hpp"
#include <string>

MateriaSource::MateriaSource(): _shelf(0)
{
    for (int i = 0; i < 4; i++)
        _cupboard[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& original): _shelf(original._shelf)
{
    for (int i = 0; i < 4; i++)
    {
        if (original._cupboard[i])
            _cupboard[i] = original._cupboard[i]->clone();
        else
            _cupboard[i] = NULL;
    }
}

MateriaSource&  MateriaSource::operator=(const MateriaSource& rhs)
{
    if (this == &rhs)
        return(*this);
    // _shelf = rhs._shelf;
    for (int i = 0; i < 4; i++)
    {
        delete _cupboard[i];
        _cupboard[i] = rhs._cupboard[i];
        if (_cupboard[i])
            _cupboard[i] = rhs._cupboard[i]->clone();
    }
    return (*this);
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
        delete _cupboard[i];
}

void    MateriaSource::learnMateria(AMateria* m)
{
    if (!m || _shelf == 4)
        return ;
    _cupboard[_shelf] = m->clone();
    _shelf++;
}

AMateria*   MateriaSource::createMateria(const std::string& type)
{
    for (int i = 0; i < _shelf; i++)
    {
        if (_cupboard[i]->getType() == type)
            return (_cupboard[i]->clone());
    }
    return (NULL);
}