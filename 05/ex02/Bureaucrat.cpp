/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/04 13:44:10 by arommers      #+#    #+#                 */
/*   Updated: 2023/12/07 13:52:32 by arommers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

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

void    Bureaucrat::setGrade(int grade)
{
    _grade = grade;
}

void    Bureaucrat::incrementGrade()
{
    if (_grade - 1 < 1)
        throw GradeTooHighException();
    std::cout << _name << " was promoted!" << std::endl;
    _grade--;
}

void    Bureaucrat::decrementGrade()
{
    if (_grade + 1 > 150)
        throw GradeTooLowException();
    std::cout << _name << " was demoted!" << std::endl;
    _grade++;
}

void    Bureaucrat::signForm(AForm& form)
{
    try
    {
        form.beSigned(*this);
        std::cout << _name << " signed form: " << form.getName() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << _name << " does not have clearance, " << form.getName()<< e.what() << '\n';
    }
}

void    Bureaucrat::executeForm(const AForm& form )
{
    try
    {
        form.execute(*this);
        std::cout << _name << " executed form: " << form.getName() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << _name << " does not have clearance, "<<e.what() << std::endl;
    }
}

std::ostream&   operator<<(std::ostream& os, const Bureaucrat& object)
{
    os << object.getName() <<  " bureaucrat grade: " << object.getGrade() << ".";
    return (os);
}