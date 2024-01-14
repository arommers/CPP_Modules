/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MutantStack.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: adri <adri@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/14 11:38:53 by adri          #+#    #+#                 */
/*   Updated: 2024/01/14 21:00:07 by adri          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stack>
#include <vector>

#define RED "\033[31m"
#define GREEN "\033[32m"
#define RESET "\033[0m"

template<typename T>
class MutantStack: public std::stack<T, std::vector<T> >
{
    public:
        MutantStack() {};
        MutantStack(const MutantStack& rhs): std::stack<T, std::vector<T> >(rhs) {};
        ~MutantStack() {};
        
        const MutantStack& operator=(const MutantStack& rhs)
        {
            if (this != &rhs)
                this->c = rhs.c;
            return (*this);
        }

        typedef typename std::vector<T>::iterator iterator;
        
        iterator begin() {return this->c.begin();}
        iterator end() {return this->c.end();}
};
