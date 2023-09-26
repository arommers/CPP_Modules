/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: adri <adri@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/26 23:22:41 by adri          #+#    #+#                 */
/*   Updated: 2023/09/26 23:29:47 by adri          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    Harl harl;

    harl.complain("DEBUG");
    std::this_thread::sleep_for(std::chrono::seconds(2));
    harl.complain("INFO");
    std::this_thread::sleep_for(std::chrono::seconds(2));
    harl.complain("WARNING");
    std::this_thread::sleep_for(std::chrono::seconds(2));
    harl.complain("ERROR");
    std::this_thread::sleep_for(std::chrono::seconds(2));
    
    return (0);
}