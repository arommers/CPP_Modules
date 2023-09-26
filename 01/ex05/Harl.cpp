/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Harl.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: adri <adri@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/26 21:55:18 by adri          #+#    #+#                 */
/*   Updated: 2023/09/26 23:32:23 by adri          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
    std::cout << "Oh god here comes Harl..." << std::endl;
    std::cout << std::endl;
}

Harl::~Harl()
{
    std::cout << std::endl;
    std::cout << "Bye Harl! Don't let the door hit your behind on your way out ~~~" << std::endl;
}

void    Harl::debug()
{
    std::cout << GREEN "[DEBUG]" RESET << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger I really do!" << std::endl;
}

void    Harl::info()
{
    std::cout << YELLOW "[INFO]" RESET << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
    std::cout << "You didn’t put enough bacon in my burger!" << std::endl;
    std::cout << "If you did, I wouldn’t be asking for more!" << std::endl;
}

void    Harl::warning()
{
    std::cout << ORANGE "[WARNING]" RESET << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
    std::cout << "I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void    Harl::error()
{
    std::cout << RED "[ERROR]" RESET << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void    Harl::complain(std::string level)
{
    void    (Harl::*complainPtr[4])() = {
    &Harl::debug, 
    &Harl::info, 
    &Harl::warning, 
    &Harl::error};

    std::string levels[4] = {
    "DEBUG",
    "INFO",
    "WARNING",
    "ERROR"};
    
    for (int i = 0; i < 4; i++)
    {
        if (levels[i] == level)
        {
            (this->*complainPtr[i])();
            return ;
        }
    }
    std::cout << "Invalid complaint level REEEEEE" << std::endl;
}