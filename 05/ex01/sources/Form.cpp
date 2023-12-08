/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/06 13:42:44 by arommers      #+#    #+#                 */
/*   Updated: 2023/12/06 16:40:19 by arommers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

// Orhtodox Canonical form

Form::Form(std::string name, int sign, int execute): _name(name), _gradeSign(sign), _gradeExecute(execute)
{
    if (_gradeSign < 1 || _gradeExecute < 1)
        throw GradeTooHighException();
    else if (_gradeSign > 150 || _gradeExecute > 150)
        throw GradeTooLowException();
    _signed = false;
    std::cout << "An unsigned form was created" << std::endl;    
}

Form::~Form()
{
    std::cout << "Form shredded" << std::endl;
}

Form::Form(const Form& original): _name(original._name),  _signed(original._signed), _gradeSign(original._gradeSign), _gradeExecute(original._gradeExecute)
{
    std::cout << "Copy constructor called" << std::endl;    
}

Form&   Form::operator=(const Form& rhs)
{
    if (this != &rhs)
        _signed = rhs._signed;
    return (*this);
}

// Getters

std::string Form::getName() const
{
    return (_name);
}

bool    Form::getSigned() const 
{
    return (_signed);
}

int Form::getGradeSign() const
{
    return (_gradeSign);
}

int Form::getGradeExecute() const
{
    return (_gradeExecute);
}

void    Form::beSigned(const Bureaucrat& b)
{
    if (b.getGrade() > _gradeSign)
        throw GradeTooLowException();
    _signed = true;
}

// insetion operator overload

std::ostream&   operator<<(std::ostream& os, const Form& object)
{
    os << "Form: " << object.getName() << 
    ", requires grade " << object.getGradeSign() << 
    " to sign and grade " << object.getGradeExecute() << 
    " to execute. It's currently " << (object.getSigned() ? "signed" : "unsigned") << std::endl;
    return (os);
}
