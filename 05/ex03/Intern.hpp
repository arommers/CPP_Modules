/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/08 11:08:44 by arommers      #+#    #+#                 */
/*   Updated: 2023/12/08 11:13:07 by arommers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
class Bureaucrat;
class AForm;


class Intern
{
    public:
        Intern();
        Intern(const Intern& original);
        Intern& operator=(const Intern& rhs);
        ~Intern();
        
        AForm* makeForm(const std::string formName, const std::string formTarget);
};