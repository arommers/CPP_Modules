/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RPN.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/22 10:37:10 by arommers      #+#    #+#                 */
/*   Updated: 2024/01/22 11:52:26 by arommers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <sstream>
#include <stack>

class RPN
{
    public:
        RPN();
        RPN(const RPN& rhs);
        ~RPN();

        const RPN& operator=(const RPN& rhs);

        static int  parseInput(const std::string& input);
};

int calculate(char& operateChar, int& operandOne, int& operandTwo);