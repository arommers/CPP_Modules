/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RobotomyRequestForm.cpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/07 13:58:43 by arommers      #+#    #+#                 */
/*   Updated: 2023/12/07 16:11:46 by arommers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>

RobotRequestForm::RobotRequestForm(const std::string& target): AForm("RobotRequestForm", 72, 45), _target(target) {}

RobotRequestForm::~RobotRequestForm() {}

RobotRequestForm::RobotRequestForm(const RobotRequestForm& original): AForm(original), _target(original._target){}

RobotRequestForm& RobotRequestForm::operator=(const RobotRequestForm& rhs)
{  
    (void)rhs;
    return (*this);
}

void    RobotRequestForm::execute(const Bureaucrat& executor) const
{
    if (!getSigned())
        throw NotSignedException();
    else if (executor.getGrade() > getGradeExecute())
        throw GradeTooLowException();
    std::cout << "Whirrrrr... Bzzzzz... ZzzzZZZzzzZZZ" << std::endl;
    std::srand(static_cast<unsigned>(std::time(NULL)));
    unsigned int i = rand();
    if (i % 2 == 0)
        std::cout << _target << "has been robotomized successfully!" << std::endl;
    else
        std::cout << "Robotomy of " << _target << " failed..." << std::endl;
}
