/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/08 11:08:44 by arommers      #+#    #+#                 */
/*   Updated: 2023/12/08 12:48:31 by arommers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "AForm.hpp"


class Intern
{
    public:
        Intern();
        Intern(const Intern& original);
        Intern& operator=(const Intern& rhs);
        ~Intern();
        
        AForm *makeForm(std::string name, std::string target);
};