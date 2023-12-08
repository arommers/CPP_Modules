/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AForm.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/06 13:38:21 by arommers      #+#    #+#                 */
/*   Updated: 2023/12/08 12:50:32 by arommers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <exception>
class Bureaucrat;

class AForm
{
    private:
        const std::string   _name;
        bool                _signed;
        const int           _gradeSign;
        const int           _gradeExecute;
        
    public:
        AForm();
        AForm(std::string name, int sign, int execute);
        AForm(const AForm& original);
        AForm& operator=(const AForm& rhs);
        virtual ~AForm();

        std::string getName() const;
        bool        getSigned() const;
        int         getGradeSign() const;
        int         getGradeExecute() const;

        void        beSigned(const Bureaucrat& b);
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
        class NotSignedException: public std::exception
        {
            public:
                const char* what() const throw()
                {
                    return ("This form is not signed");
                }
        };
        
        virtual void    execute(const Bureaucrat& executor) const = 0;
};

std::ostream&   operator<<(std::ostream& os, const AForm& object);