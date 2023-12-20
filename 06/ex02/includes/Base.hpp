/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Base.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/20 14:41:33 by arommers      #+#    #+#                 */
/*   Updated: 2023/12/20 21:11:37 by adri          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <ctime>

class Base
{
    public:
        virtual ~Base() = 0;
};

class A: public Base{};
class B: public Base{};
class C: public Base{};

Base    *generate(void);
void    identify(Base* p);
void    identify(Base& p);

