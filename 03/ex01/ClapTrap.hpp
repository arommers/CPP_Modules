/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/02 15:00:21 by arommers      #+#    #+#                 */
/*   Updated: 2023/10/04 15:15:32 by arommers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <thread>
#include <chrono>

#define RED "\x1b[31m"
#define GREEN "\x1b[32m"
#define CYAN "\x1b[36m"
#define YELLOW "\x1b[33m"
#define ORANGE "\033[38;2;255;165;0m"
#define RESET "\x1b[0m"

class ClapTrap
{
    protected:
        std::string _name;
        int         _HitPoints;
        int         _Energy;
        int         _AttackDamage;
        int         _MaxHP;
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap& copy);
        ClapTrap& operator=(const ClapTrap& rhs);
        ~ClapTrap();

        int             getHitpoints();
        int             getEnergy();
        int             getAttackDamage();
        int             getMaxHP();;
        std::string     getName();
        
        void            setHitpoints(int amount);
        void            setEnergy(int amount);
        void            setAttackDamage(int amount);
        void            setMaxHP(int amount);
        void            setName(std::string name);
        
        void            attack(const std::string& target);
        void            takeDamage(unsigned int amount);
        void            beRepaired(unsigned int amount);  
};

#endif