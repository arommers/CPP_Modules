/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Source.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: adri <adri@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/11 14:18:40 by adri          #+#    #+#                 */
/*   Updated: 2023/10/11 14:57:52 by adri          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Source.hpp"

MateriaSource::MateriaSource(): _shelf(0)
{
    for (int i = 0; i < 4; i++)
        _cupboard[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& orginal)
{
    
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