/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RPN.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/22 10:37:19 by arommers      #+#    #+#                 */
/*   Updated: 2024/01/22 14:59:20 by arommers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() {};
RPN::RPN(const RPN& rhs) {(void) rhs;};
RPN::~RPN() {};

const RPN& RPN::operator=(const RPN& rhs) {return(*this = rhs);};

    class invalidNum: public std::exception
    {
        public:
            const char *what() const noexcept override;
    };

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
                throw RPN::zeroDivisionException();
            result = first / second;
            break;
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
        if (token.size() == 1 && isdigit(token[0]))
            operands.push(token[0] - '0');
        else if (token.size() > 1 && std::all_of(token.begin(), token.end(), isdigit))
            throw invalidNumException();
        else if (!isdigit(token[0]) && token.find_first_of("+-*/") == std::string::npos)
            throw invalidCharException();
        else
        {
            if (operands.size() < 2)
                throw std::runtime_error("Error: too few elements to execute operation");
            
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

const char *RPN::invalidNumException::what() const noexcept
{
    return ("Error: string contains an element outside of [0 - 9]");    
}

const char *RPN::invalidCharException::what() const noexcept
{
    return ("Error: string contains an invalid char element");
}

const char *RPN::zeroDivisionException::what() const noexcept
{
    return ("Error: divison by zero");
}