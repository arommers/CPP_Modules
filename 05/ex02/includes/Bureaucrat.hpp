/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/04 13:44:13 by arommers      #+#    #+#                 */
/*   Updated: 2023/12/07 13:10:04 by arommers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <exception>
class AForm;

class Bureaucrat
{
  private:
    const std::string _name;
    int               _grade;
    
  public:
    Bureaucrat(const std::string name, int grade);
    Bureaucrat(const Bureaucrat& original);
    Bureaucrat& operator=(const Bureaucrat& rhs);
    ~Bureaucrat();

    std::string   getName() const;
    int           getGrade() const;
    void          setGrade(int grade);

    void  incrementGrade();
    void  decrementGrade();
    
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

    void  signForm(AForm& form);
    void  executeForm(const AForm& form); 
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& object);