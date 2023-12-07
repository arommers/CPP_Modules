/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/07 12:38:46 by arommers      #+#    #+#                 */
/*   Updated: 2023/12/07 14:31:32 by arommers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
    // Let's make a bureacrat and a shrub form
    std::cout << "*** We create a valid bureaucrat and a shrub form: ***" << std::endl;
    Bureaucrat              bob("Bob", 10);
    ShrubberyCreationForm   shrub("xmas");
    RobotRequestForm        robob("Bob");
    std::cout << std::endl;

    std::cout << "*** Let's check our bureaucrat and forms: ***" << std::endl;
    std::cout << bob << std::endl;
    std::cout << shrub << std::endl;
    std::cout << robob << std::endl;

    // Let's sign the form
    std::cout << "*** Let's have Bob sign the form: ***" << std::endl;
    bob.signForm(shrub);
    std::cout << std::endl;
    std::cout << shrub << std::endl;

    // Let's have bob execute the form
    std::cout << "*** Let's have Bob execute the form: ***" << std::endl;
    bob.executeForm(shrub);
    std::cout << std::endl;

    // Lets demote bob and have hi try it again
    std::cout << "*** Let's demote Bob and let him try again: ***" << std::endl;
    bob.setGrade(150);
    bob.executeForm(shrub);
    std::cout << std::endl;
    bob.setGrade(10);

    // robot time, we can comment out the siging to test for executing unsigned forms
    std::cout << "*** Let's have Bob sign the form: ***" << std::endl;
    bob.signForm(robob);
    std::cout << std::endl;
    std::cout << robob << std::endl;
    std::cout << "*** Let's try and turn bob into a robot... just for fun ***" << std::endl;
    bob.executeForm(robob);
    std::cout << std::endl;

    //  Destructors being called
    std::cout << "*** Destructors being called: ***" << std::endl;
    return (0);
}