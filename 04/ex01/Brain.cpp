/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: adri <adri@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/07 12:31:57 by adri          #+#    #+#                 */
/*   Updated: 2023/10/09 10:16:39 by arommers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain constructor called." << std::endl;
}

Brain::Brain(const Brain& original)
{
    for(int i = 0; i < 100; i++)
        _ideas[i] = original._ideas[i];
    std::cout << "Brain copy constructor called." << std::endl;
}

Brain&  Brain::operator=(const Brain& rhs)
{
    if (this == &rhs)
        return (*this);
    for(int i = 0; i < 100; i++)
        _ideas[i] = rhs._ideas[i];
    return (*this);
    std::cout << "Brain assignment overload operator called." << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain destructor called." << std::endl;
}

void    Brain::setIdea(int index, const std::string idea)
{
    if (index >= 0 && index <= 100)
        _ideas[index] = idea;
    else
        std::cout << "Please enter an index from 0 to 100." << std::endl;
}

std::string Brain::getIdea(int index) const
{
    if (index >= 0 && index <= 100)
        return (_ideas[index]);
    else
        std::cout << "Please enter an index from 0 to 100." << std::endl;
    return "";
}
