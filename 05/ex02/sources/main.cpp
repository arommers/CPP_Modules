/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/07 12:38:46 by arommers      #+#    #+#                 */
/*   Updated: 2023/12/08 12:21:48 by arommers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    // Let's make a bureacrat and a shrub form
    std::cout << "*** We create a valid bureaucrat and a shrub form: ***" << std::endl;
    Bureaucrat              bob("Bob", 10);
    ShrubberyCreationForm   shrub("xmas");
    RobotRequestForm        robob("Bob");
    PresidentialPardonForm  sorry("The 9/11 hijackers");
    std::cout << std::endl;

    std::cout << "*** Let's check our bureaucrat and forms: ***" << std::endl;
    std::cout << bob << std::endl;
    std::cout << shrub << std::endl;
    std::cout << robob << std::endl;
    std::cout << sorry << std::endl;
    std::cout << std::endl;

    // Let's sign the form
    std::cout << "*** Let's have Bob sign a form: ***" << std::endl;
    bob.signForm(shrub);
    std::cout << std::endl;
    std::cout << shrub << std::endl;
    std::cout << std::endl;

    // Let's have bob execute the form
    std::cout << "*** Let's have Bob execute the form: ***" << std::endl;
    bob.executeForm(shrub);

    // Robot time, we can comment out the siging to test for executing unsigned forms
    std::cout << "*** Let's have Bob sign a form: ***" << std::endl;
    bob.signForm(robob);
    std::cout << std::endl;
    std::cout << robob << std::endl;
    std::cout << std::endl;

    std::cout << std::endl;
    std::cout << "*** Let's try and turn bob into a robot... just for fun ***" << std::endl;
    bob.executeForm(robob);
    std::cout << std::endl;

    // Time for some lunacy
    bob.signForm(sorry);
    std::cout << std::endl;
    std::cout << "*** Now it's time to pardon some people with an executive form" << std::endl;
    bob.executeForm(sorry);
    std::cout << std::endl;

    std::cout << "*** It seemed bob wasn't senior enough for these kinds of executive decisions ***" << std::endl;
    std::cout << "*** Let's make him president and see how he sways his power ***" << std::endl;
    bob.setGrade(1);
    bob.executeForm(sorry);
    std::cout << std::endl;

    //  Destructors being called
    std::cout << "*** Destructors being called: ***" << std::endl;
    return (0);
}
