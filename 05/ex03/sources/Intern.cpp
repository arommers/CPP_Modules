/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/08 11:08:30 by arommers      #+#    #+#                 */
/*   Updated: 2023/12/08 13:29:47 by arommers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

// define a function to be called through a pointer
typedef AForm* (*formPtr)(std::string);

Intern::Intern() {}

Intern::Intern(const Intern& original) 
{
    *this = original;
}

Intern& Intern::operator=(const Intern& rhs)
{
    (void) rhs;
    return (*this);
}

Intern::~Intern() {}


AForm   *shrub(std::string target)
{
    return (new ShrubberyCreationForm(target));
}

AForm   *president(std::string target)
{
    return (new PresidentialPardonForm(target));
}

AForm   *robot(std::string target)
{
    return (new RobotRequestForm(target));
}

AForm  *Intern::makeForm(std::string name, std::string target)
{
    AForm   *ptr = NULL;
    
    std::string names[] = {
        "presidential pardon",
        "shrubbery creation",
        "robotomy request",
    };

    formPtr forms[] = {
        &president,
        &shrub,
        &robot,
    };
    for (int i = 0; i < 3; i++)
    {
        if(name == names[i])
        {
            std::cout << "Intern creates: " << name << std::endl;
            return (ptr = forms[i](target));
        }
    }
    std::cout << "Intern couldn't create: " << name << std::endl;
    return (NULL);
}
