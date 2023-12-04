/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/04 16:27:41 by arommers      #+#    #+#                 */
/*   Updated: 2023/12/04 16:35:31 by arommers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat  bob("Bob", 69);
    
    std::cout << "Our bureaucrat is named: " << bob.getName() << std::endl;
    
    return (0);
}