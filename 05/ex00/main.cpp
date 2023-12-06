/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/04 16:27:41 by arommers      #+#    #+#                 */
/*   Updated: 2023/12/06 12:30:29 by arommers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    // Creating a valid bureaucrat
    std::cout << "*** We create a valid bureaucrat: ***" << std::endl;
    Bureaucrat  bob("Bob", 69);
    std::cout << std::endl;

    // using a try and catch block to create a bureaucrat with an invalid grade
    std::cout << "*** we try and create a bureaucrat with a grade too low: ***" << std::endl;
    try
    {
        Bureaucrat  smuck("Smuck1", 160);
    }
    catch(const std::exception& e)
    {
        std::cerr << "Error creating bureaucrat, " << e.what() << std::endl;
    } 
    std::cout << std::endl;

    // using a try and catch block to create a bureaucrat with an invalid grade
    std::cout << "*** we try and create a bureaucrat with a grade too high: ***" << std::endl;
    try
    {
        Bureaucrat smuck("Smuck2", -2);
    }
    catch(const std::exception& e)
    {
        std::cerr << "Error creating bureaucrat, " << e.what() << std::endl;
    }
    std::cerr << std::endl;

    // we test our increment function
    std::cout << "** We promote Bob! **" << std::endl;
    std::cout << "Grade before promotion: " << bob.getGrade() << std::endl;
    try
    {
        bob.incrementGrade();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << "Grade after promotion: " << bob.getGrade() << std::endl;
    std::cerr << std::endl;

    bob.setGrade(1); // we change bob's grade to test the increment function again

    std::cout << "*** we try and promote a bureaucrat too high: ***" << std::endl;
    try
    {
        bob.incrementGrade();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cerr << std::endl;

    bob.setGrade(99);
    
    // we test our decrement function
    std::cout << "** We demote Bob! **" << std::endl;
    std::cout << "Grade before demotion: " << bob.getGrade() << std::endl;
    try
    {
        bob.decrementGrade();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << "Grade after demotion: " << bob.getGrade() << std::endl;
    std::cerr << std::endl;

    bob.setGrade(150); // we change bob's grade to test the decrement function
    std::cout << "*** we try and demote a bureaucrat too low: ***" << std::endl;
    try
    {
        bob.decrementGrade();
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cerr << std::endl;

    // We test our implemention of the insertion operator overload
    std::cout <<"*** We test our implemention of the insertion operator overload: ***" << std::endl;
    std::cout << bob << std::endl;
    std::cout << std::endl;

    std::cout << "** we murder Bob **" << std::endl;
    return (0);
}