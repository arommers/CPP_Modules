/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/07 12:38:46 by arommers      #+#    #+#                 */
/*   Updated: 2023/12/08 13:30:03 by arommers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
   Intern   incompetentFool;
   AForm    *form1;
   AForm    *form2;
   AForm    *form3;

   std::cout << "*** Let's mess with the intern a bit ***" << std::endl;
   form1 = incompetentFool.makeForm("random file", "Bob");
   std::cout << std::endl;
   
   std::cout << "*** Let's see what the intern can do ***" << std::endl;

   form1 = incompetentFool.makeForm("robotomy request", "Bob");
   form2 = incompetentFool.makeForm("shrubbery creation", "Bob");
   form3 = incompetentFool.makeForm("presidential pardon", "Bob");
   std::cout << std::endl;

   delete form1;
   delete form2;
   delete form3;
   
   return (0); 
}