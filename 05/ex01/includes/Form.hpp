/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/06 13:38:21 by arommers      #+#    #+#                 */
/*   Updated: 2023/12/06 16:38:30 by arommers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <exception>
class Bureaucrat;

class Form
{
    private:
        const std::string   _name;
        bool                _signed;
        const int           _gradeSign;
        const int           _gradeExecute;
        
    public:
        Form(std::string name, int sign, int execute);
        Form(const Form& original);
        Form& operator=(const Form& rhs);
        ~Form();

        std::string getName() const;
        bool        getSigned() const;
        int         getGradeSign() const;
        int         getGradeExecute() const;

        class GradeTooHighException: public std::exception
        {
            public:
                const char* what() const throw()
                {
                    return ("Grade is too high");
                }
        };
        class GradeTooLowException: public std::exception
        {
            public:
                const char* what() const throw()
                {
                    return ("Grade is too low");
                }
        };
        
        void    beSigned(const Bureaucrat& b);   
};

std::ostream&   operator<<(std::ostream& os, const Form& object);