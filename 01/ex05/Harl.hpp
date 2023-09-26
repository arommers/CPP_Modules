/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Harl.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: adri <adri@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/26 21:47:08 by adri          #+#    #+#                 */
/*   Updated: 2023/09/26 23:26:21 by adri          ########   odam.nl         */
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
        void    complain(std::string level);
};

// colors

# define RESET "\033[0m"
# define GREEN "\033[32m"
# define YELLOW "\033[33m"
# define ORANGE "\033[38;5;202m"
# define RED "\033[31m"

#endif