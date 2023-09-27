/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Harl.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/27 10:25:38 by arommers      #+#    #+#                 */
/*   Updated: 2023/09/27 10:45:53 by arommers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
#include <thread>

class Harl
{
    private:
        void    debug();
        void    info();
        void    warning();
        void    error();
        
    public:
        Harl();
        ~Harl();
        void    complain(std::string level) const;
};

bool checkLevel(std::string level);

// colors

# define RESET "\033[0m"
# define GREEN "\033[32m"
# define YELLOW "\033[93m"
# define ORANGE "\033[38;5;202m"
# define RED "\033[31m"

#endif