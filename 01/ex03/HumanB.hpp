/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: adri <adri@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/23 20:43:53 by adri          #+#    #+#                 */
/*   Updated: 2023/09/24 13:42:58 by adri          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
    private:
        std::string _name;
        Weapon*     _weaponPtr;
    public:
        HumanB(std::string name);
        ~HumanB();

        void    attack();
        void    setWeapon(Weapon& weapon);
};

#endif