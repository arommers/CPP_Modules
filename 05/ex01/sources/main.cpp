/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/06 14:54:40 by arommers      #+#    #+#                 */
/*   Updated: 2023/12/07 21:22:05 by adri          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    //  Creating a bureaucrat and form to work with
    std::cout << "*** We create a valid bureaucrat and form: ***" << std::endl;
    Bureaucrat  bob("Bob", 10);
    Form        order66("order66", 1, 1);
    std::cout << std::endl;

    // Let's make some invalid form
    std::cout << "*** let's try and make more some illegal forms: ***" << std::endl;
    try
    {
        Form        wrongForm("too low", 200, 200);
    }
    catch (std::exception& e)
    {
        std::cerr << "Error creating form, " << e.what() << std::endl;
    }
    std::cout << std::endl;

    // Let's see if we can get the form to sign of on itself
    std::cout << "*** Let's see if we can get the form to sign of on itself: ***" << std::endl;
    try
    {
        order66.beSigned(bob);
    }
    catch (std::exception& e)
    {
        std::cerr << "Error signing form, " << e.what() << std::endl;
    }
    std::cout << std::endl;

    //  Show that our form insertion operator is working
    std::cout << "*** Look our insertion operator is working! ***" << std::endl;
    std::cout << order66 << std::endl;

    // bob tries to sign of on a form he is not authorized for
    std::cout << "*** Bob tries to sign of on a form he is not authorized for: *** " << std::endl;
    bob.signForm(order66);
    std::cout << std::endl;

    // We give bob clearance and try again, sign form calls beSigned
    try
    {
        for (int i = 0; i < 100; i++)
            bob.incrementGrade();
    }
    catch (std::exception& e)
    {
        std::cerr << "We can't promote bob any more, " << e.what() << std::endl;
    }
    std::cout << std::endl;
    bob.signForm(order66);
    std::cout << "He just condemend all Jedi. Nice work Bob..." << std::endl;
    std::cout << std::endl;

    // We print out or form again
    std::cout << "*** Look our insertion operator is working! ***" << std::endl;
    std::cout << order66 << std::endl;

    //  Destructors being called
    std::cout << "*** Destructors being called: ***" << std::endl;
    return (0);
}