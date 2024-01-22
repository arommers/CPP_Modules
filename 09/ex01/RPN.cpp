/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RPN.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/22 10:37:19 by arommers      #+#    #+#                 */
/*   Updated: 2024/01/22 11:57:33 by arommers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() {};
RPN::RPN(const RPN& rhs) {};
RPN::~RPN() {};

const RPN& RPN::operator=(const RPN& rhs) {*this = rhs};


int calculate(char& sign, int& first, int& second)
{
    int result;

    switch(sign)
    {
        case '+':
            result = first + second;
            break;
        case '-':
            result = first - second;
            break;
        case '*':
            result = first * second;
            break;
        case '/':
            if (second == 0)
                throw std::runtime_error("Error: divison by zero");
            result = first / second;
            break;
        default:
            throw std::runtime_error("Error: not a valid operator detected");
    }
    return (result);
}

int RPN::parseInput(const std::string& input)
{
    std::stack<int> operands;
    std::string token;
    std::istringstream str(input);

    while (str >> token)
    {
        if (isdigit(token[0]))
            operands.push(token[0]);
        else
        {
            if (operands.size() < 2)
                throw std::runtime_error("Error: too few elements to execute the operator");
            
            int operandTwo = operands.top();
            operands.pop();
            int operandOne = operands.top();
            operands.pop();

            int result = calculate(token[0], operandOne, operandTwo);
           operands.push(result); 
        }
    }
    if (operands.size() != 1)
        throw std::runtime_error("Error: not a valid RPN expression");
    return (operands.top());
}