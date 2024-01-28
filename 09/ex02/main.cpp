/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/26 13:58:51 by arommers      #+#    #+#                 */
/*   Updated: 2024/01/28 12:40:02 by arommers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
    if (argc < 2)
    {
        std::cerr << "Error: Please provide: <./PmergeMe> <a list of non duplicate numbers>..." << std::endl;
        return (1);
    }
    PmergeMe    pmergeme;
    pmergeme.sortVector(argv[1]); 
    return (0);
}