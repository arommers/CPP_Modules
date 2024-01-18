/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   BitcoinExchange.cpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/18 10:04:31 by arommers      #+#    #+#                 */
/*   Updated: 2024/01/18 14:58:19 by arommers      ########   odam.nl         */
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
            catch (const std::invalid_argument&)
            {
                std::cerr << "Error: invalid exchange rate in database" << std::endl;
            }
            catch (const std::out_of_range&)
            {
                std::cerr << "Error: Exchange rate is out of range" << std::endl;
            }
            catch(...)
            {
                std::cerr << "Error: something went wrong..." << std::endl;
            }
        }
        else
            std::cerr << "Error: invalid input in database file." << std::endl;
    }
};

void    BitcoinExchange::parseInfile(const std::string& infile)
{
    std::ifstream   input(infile);
    if (!input.is_open())
        std::cerr << "Error: could not open input file" << std::endl;
        
    std::string header, line, strDate, strRate;
    std::getline(input, header);

    while (std::getline(input, line))
    {
        std::istringstream  str(line);
        if (std::getline(str >> std::ws, strDate, '|') && std::getline(str >> std::ws, strRate))
        {
            try
            {
                double  rate = std::stod(strRate);
                printLine(strDate, rate);
            }
            catch (const std::invalid_argument&)
            {
                std::cerr << "Error: invalid exchange rate in database." << std::endl;
            }
            catch (const std::out_of_range&)
            {
                std::cerr << "Error: Exchange rate is out of range." << std::endl;
            }
            catch(...)
            {
                std::cerr << "Error: something went wrong..." << std::endl;
            }
        }
        else
            std::cerr << "Error: invalid input => " << line << std::endl;
    }
};

void    BitcoinExchange::printLine(const std::string& date, double rate)
{
    auto    it = _prices.lower_bound(date);
    double  exchange, result;
    
    if (it == _prices.begin())
    {
        std::cerr << "Error: no valid date found." << std::endl;
        return ;
    }
    --it;
    exchange = it->second;
    result = rate * exchange;
    std::cout << date << " => " << rate << " = " << result << std::endl;
}


void    BitcoinExchange::printMap()
{
    std::cout << "Map contents: " << std::endl;
    for (const auto entry : _prices)
        std::cout << entry.first << " => " << entry.second << std::endl;
};

