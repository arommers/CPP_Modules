/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresidentialPardonForm.cpp                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/07 16:13:13 by arommers      #+#    #+#                 */
/*   Updated: 2023/12/07 16:31:28 by arommers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string& target): AForm("PresidentialPardonForm", 25, 5), _target(target) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& original): AForm(original), _target(original._target){}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& rhs)
{  
    (void)rhs;
    return (*this);
}

void    PresidentialPardonForm::execute(const Bureaucrat& executor) const
{
    if (!getSigned())
        throw NotSignedException();
    else if (executor.getGrade() > getGradeExecute())
        throw GradeTooLowException();
    std::cout << "Woops! In a fit of deranged delusion President Bob posthumously pardoned " << _target << std::endl;
}