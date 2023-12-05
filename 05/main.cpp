/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/04 16:27:41 by arommers      #+#    #+#                 */
/*   Updated: 2023/12/05 16:17:44 by adri          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    // Creating a valid bureaucrat
    Bureaucrat  bob("Bob", 69);

    // using a try and catch block to create a bureaucrat with an invalid grade
    try
    {
        Bureaucrat  smuck("Smuck1", 160);
    }
    catch(const Bureaucrat::GradeTooLowException& e)
    {
        std::cout << "Error creating bureaucrat, " << e.what() << std::endl;
    } 

    try
    {
        Bureaucrat smuck("Smuck2", -2);
    }
    catch(const Bureaucrat::GradeTooHighException& e)
    {
        std::cout << "Error creating bureaucrat, " << e.what() << std::endl;
    }
    return (0);
}