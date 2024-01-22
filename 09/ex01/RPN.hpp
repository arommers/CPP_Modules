/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RPN.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/22 10:37:10 by arommers      #+#    #+#                 */
/*   Updated: 2024/01/22 13:43:33 by arommers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <sstream>
#include <stack>
#include <algorithm>

class RPN
{
    public:
        RPN();
        RPN(const RPN& rhs);
        ~RPN();

        const RPN& operator=(const RPN& rhs);

        static int  parseInput(const std::string& input);
    
    class invalidNumException: public std::exception
    {
        public:
            const char *what() const noexcept override;
    };

    class invalidCharException: public std::exception
    {
        public:
            const char *what() const noexcept override;
    };
    class zeroDivisionException: public std::exception
    {
        public:
            const char *what() const noexcept override;
    };
};

int calculate(char& operateChar, int& operandOne, int& operandTwo);