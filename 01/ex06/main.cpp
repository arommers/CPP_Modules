/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/27 10:25:46 by arommers      #+#    #+#                 */
/*   Updated: 2023/09/27 10:49:22 by arommers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cerr << "* ERROR. Please provide: <./harlfilter> <level> *\n";
        return (1);
    }
    if (!checkLevel(argv[1]))
    {
        std::cerr << "* ERROR. Please provide a valid level *\n";
        std::cerr << "* DEBUG, INFO, WARNING or ERROR *\n";
        return (1);
    }

    Harl    harl;
    
    harl.complain(argv[1]);
    return (0);    
}