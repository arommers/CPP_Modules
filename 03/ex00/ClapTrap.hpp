/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/02 15:00:21 by arommers      #+#    #+#                 */
/*   Updated: 2023/10/03 11:02:42 by adri          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <climits>

#define RED "\x1b[31m"
#define GREEN "\x1b[32m"
#define CYAN "\x1b[36m"
#define RESET "\x1b[0m"

class ClapTrap
{
    private:
        std::string _name;
        int         _HitPoints;
        int         _Energy;
        int         _AttackDamage;
    public:
        ClapTrap(std::string name);
        ~ClapTrap();

        int             getHitpoints();
        int             getEnergy();
        int             getAttackDamage();
        std::string     getName();
        
        void            setHitpoints(int amount);
        void            setEnergy(int amount);
        void            setAttackDamage(int amount);
        
        void            attack(const std::string& target);
        void            takeDamage(unsigned int amount);
        void            beRepaired(unsigned int amount);  
};

#endif