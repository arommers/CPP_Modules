/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   BitcoinExchange.cpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/18 10:04:31 by arommers      #+#    #+#                 */
/*   Updated: 2024/01/18 13:26:35 by arommers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {};
BitcoinExchange::BitcoinExchange(const std::string& database) 
{
    parseDatabase(database);
};
BitcoinExchange::BitcoinExchange(const BitcoinExchange& rhs) {*this = rhs;};
BitcoinExchange::~BitcoinExchange() {};

const BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& rhs)
{
    (void) rhs;
    return (*this);
};

void BitcoinExchange::parseDatabase(const std::string& database)
{
    std::ifstream    input(database);
    if (!input.is_open())
    {
        std::cerr << "Error: could not open database file." << std::endl;
        return ;
    }
    
    std::string header, line, strDate, strRate;
    std::getline(input, header);

    while (std::getline(input, line))
    {
        std::istringstream  str(line);
        
        if (std::getline(str, strDate, ',') && std::getline(str, strRate))
        {
            try
            {
                double  rate = std::stod(strRate);
                _prices[strDate] = rate;
            }
            catch (const std::invalid_argument& e)
            {
                std::cerr << "Error: invalid exchange rate in database" << std::endl;
            }
            catch (const std::out_of_range& e)
            {
                std::cerr << "Error: Exchange rate is out of range" << std::endl;
            }
            catch(...)
            {
                std::cerr << "Error: something went wrong..." << std::endl;
            }
        }
        else
            std::cerr << "Error; invalid input in database file." << std::endl;
    }
};

void    BitcoinExchange::printMap()
{
    std::cout << "Map contents: " << std::endl;
    for (const auto entry : _prices)
        std::cout << entry.first << " => " << entry.second << std::endl;
};

