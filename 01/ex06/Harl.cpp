/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Harl.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/27 10:25:32 by arommers      #+#    #+#                 */
/*   Updated: 2023/09/27 10:58:26 by arommers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

// Constructor

Harl::Harl()
{
    std::cout << "Oh god here comes Harl..." << std::endl;
    std::cout << std::endl;
}

//Deconstructor

Harl::~Harl()
{
    std::cout << std::endl;
    std::cout << "Bye Harl! Don't let the door hit your behind on your way out ~~~" << std::endl;
}

// Function to complain based on a given level
// Uses a switch statement based on the first character of the input 'level'

void    Harl::complain(std::string level) const
{
    switch(level[0])
    {
        case 'D':
            std::cout << GREEN "[DEBUG]" RESET << std::endl;
            std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger I really do!" << std::endl;
        case 'I':
            std::cout << YELLOW "[INFO]" RESET << std::endl;
            std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
            std::cout << "You didn’t put enough bacon in my burger!" << std::endl;
            std::cout << "If you did, I wouldn’t be asking for more!" << std::endl;
        case 'W':
            std::cout << ORANGE "[WARNING]" RESET << std::endl;
            std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
            std::cout << "I’ve been coming for years whereas you started working here since last month." << std::endl;
        case 'E':
            std::cout << RED "[ERROR]" RESET << std::endl;
            std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
            break ;
    }
}

// Function to check if a given level is valid

bool checkLevel(std::string level)
{
    if (level == "DEBUG" || level == "INFO" || level == "WARNING" || level == "ERROR")
        return (true);
    return (false);
}