/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: adri <adri@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/23 20:11:44 by adri          #+#    #+#                 */
/*   Updated: 2023/09/24 13:47:21 by adri          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
    private:
        std::string _name;
        const Weapon& _weapon;
    public:
        HumanA(const std::string name, const Weapon& weapon);
        ~HumanA();

        void    attack();
};

#endif