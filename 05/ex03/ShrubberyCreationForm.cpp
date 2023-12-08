/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.cpp                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/07 11:38:37 by arommers      #+#    #+#                 */
/*   Updated: 2023/12/07 16:11:22 by arommers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target): AForm("ShrubberyCreationForm", 145, 137), _target(target) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& original): AForm(original), _target(original._target){}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& rhs)
{  
    (void)rhs;
    return (*this);
}

void    ShrubberyCreationForm::execute(const Bureaucrat& executor) const
{
    if (!getSigned())
        throw NotSignedException();
    else if (executor.getGrade() > getGradeExecute())
        throw GradeTooLowException();

    // const char tree[] = "\xF0\x9F\x8C\xB2";
    std::ofstream outFile((std::string(_target + "_shrubbery")).c_str());
    if(!outFile)
    {
        std::cerr << "Something went wrong with trying to write to " << _target << ".replace\n";
        return ;
    }
    outFile << "    *\n";
    outFile << "   ***\n";
    outFile << "  *****\n";
    outFile << " *******\n";
    outFile << "*********\n";
    outFile << "   |||\n";
    // outFile << tree << std::endl;
    outFile.close();
}
