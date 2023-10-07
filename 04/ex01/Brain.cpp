/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: adri <adri@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/07 12:31:57 by adri          #+#    #+#                 */
/*   Updated: 2023/10/07 12:40:00 by adri          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain constructor called." << std::endl;
}

Brain::Brain(const Brain& original)
{
    std::cout << "Brain copy constructor called." << std::endl;
}

Brain&  Brain::operator=(const Brain& rhs)
{
    if (this == &rhs)
        return (*this);
    return (*this);
    std::cout << "Brain assignment overload operator called." << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain destructor called." << std::endl;
}
