/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/02 15:00:21 by arommers      #+#    #+#                 */
/*   Updated: 2023/10/02 15:51:06 by arommers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    private:
        std::string _name;
        size_t         _HitPoints;
        size_t         _Energy;
        size_t         _AttackDamage;
    public:
        ClapTrap(std::string name);
        ~ClapTrap();

        size_t          getHitpoints();
        size_t          getEnergy();
        size_t          getAttackDamage();
        std::string     getName();
        
        void            setHitpoints(int amount);
        void            setEnergy(int amount);
        void            setAttackDamage(int amount);
        
        void            attack(const std::string& target);
        void            takeDamage(unsigned int amount);
        void            beRepaired(unsigned int amount);  
};



#endif