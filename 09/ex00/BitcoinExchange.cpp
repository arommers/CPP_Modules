/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   BitcoinExchange.cpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/18 10:04:31 by arommers      #+#    #+#                 */
/*   Updated: 2024/01/19 15:40:43 by arommers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {};
BitcoinExchange::BitcoinExchange(const std::string& database) 
{
    parseDatabase(database);
};
BitcoinExchange::BitcoinExchange(const BitcoinExchange& rhs) {_prices = rhs._prices;};
BitcoinExchange::~BitcoinExchange() {};

const BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& rhs)
{
    if (this != &rhs)
        (_prices = rhs._prices);
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
            catch(const std::exception& e)
            {
                std::cerr << "Error: " << e.what() << std::endl;
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
    if (input.peek() == EOF)
    {
        std::cerr << "Error: input file is empty" << std::endl;
        return;
    }

        
    std::string header, line, strDate, strValue;
    std::getline(input, header);

    while (std::getline(input, line))
    {
        std::istringstream  str(line);
        if (std::getline(str >> std::ws, strDate, '|') && std::getline(str >> std::ws, strValue))
        {
            try
            {
                size_t countDot = std::count(strValue.begin(), strValue.end(), '.');
                size_t countPipe = std::count(line.begin(), line.end(), ('|'));
                
                if ((countDot == 0 || countDot == 1) && countPipe == 1)
                {
                    double  value = std::stod(strValue);
                    printLine(strDate, value);
                }
                else
                    std::cerr << "Error: invalid input => " << line << std::endl;
            }
            catch (const std::invalid_argument&)
            {
                std::cerr << "Error: invalid value in input file." << std::endl;
            }
            catch (const std::out_of_range&)
            {
                std::cerr << "Error: value is out of range." << std::endl;
            }
            catch(const std::exception& e)
            {
                std::cerr << "Error: " << e.what() << std::endl;
            }
        }
        else
            std::cerr << "Error: invalid input => " << line << std::endl;
    }
};

void    BitcoinExchange::printLine(const std::string& date, double value)
{
    if (!validDate(date))
        return ;
    if (!validRate(value))
        return ;

        
    auto    it = _prices.lower_bound(date);
    double  exchange, result;
    
    if (it == _prices.begin())
    {
        std::cerr << "Error: no valid date found." << std::endl;
        return ;
    }
    --it;
    exchange = it->second;
    result = value * exchange;
    std::cout << date << " => " << value << " = " << result << std::endl;
}


bool    BitcoinExchange::validDate(const std::string& date)
{
    std::regex  check("^(\\d{4})-(0[1-9]|1[0-2])-(0[1-9]|[12][0-9]|3[0-1])\\s*$");
    bool result = regex_match(date, check);
    if (!result)
        std::cerr << "Error: Invalid date format: " << date << std::endl;
    return result;
};

bool    BitcoinExchange::validRate(double value)
{
    if (value >= 0.0 && value <= 1000.0)
        return (true);
    std::cout << "Error: value not in range [0 - 1000]" << std::endl;
    return (false);
}

void    BitcoinExchange::printMap()
{
    std::cout << "Map contents: " << std::endl;
    for (const auto entry : _prices)
        std::cout << entry.first << " => " << entry.second << std::endl;
};

