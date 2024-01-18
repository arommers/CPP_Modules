/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   BitcoinExchange.hpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/18 10:04:44 by arommers      #+#    #+#                 */
/*   Updated: 2024/01/18 13:20:43 by arommers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <fstream>
#include <sstream>
#include <map>

class BitcoinExchange
{
    private:
        std::map<std::string, double>   _prices;
    public:
        BitcoinExchange();
        BitcoinExchange(const std::string& database);
        BitcoinExchange(const BitcoinExchange& rhs);
        ~BitcoinExchange();
        
        const BitcoinExchange&  operator=(const BitcoinExchange& rhs);

        void    parseDatabase(const std::string& database);
        void    printMap();
        
        
};