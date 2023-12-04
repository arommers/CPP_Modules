/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/04 13:44:10 by arommers      #+#    #+#                 */
/*   Updated: 2023/12/04 16:38:11 by arommers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string name, int grade): _name(name), _grade(grade)
{
    if (grade < 1)
        throw GradeTooHighException();
    if (grade > 150)
        throw GradeTooLowException();
    std::cout << "Bureaucrat named " << _name << " was created" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& original):_name(original._name), _grade(original._grade)
{
    std::cout << "Copy constructor called" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& rhs)
{
    if (this != &rhs)
    {
        _grade = rhs._grade;
    }
    return(*this);
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat named " << _name << " was rightfully murdered" << std::endl;
}

std::string Bureaucrat::getName() const
{
    return (_name);
}

int Bureaucrat::getGrade() const
{
    return(_grade);
}
