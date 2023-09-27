/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: adri <adri@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/21 10:24:34 by adri          #+#    #+#                 */
/*   Updated: 2023/09/27 11:33:36 by arommers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
    private:
        std::string _name;
    
    public:
        Zombie();
        // Zombie(std::string name);
        ~Zombie();
        
        void    announce();
        void    setName(std::string name);   
};

Zombie* zombieHorde(int N, std::string name);

#endif