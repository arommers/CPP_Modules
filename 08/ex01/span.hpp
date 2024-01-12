/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   span.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/11 15:24:04 by arommers      #+#    #+#                 */
/*   Updated: 2024/01/12 12:13:36 by arommers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <vector>
#include <limits>
#include <iostream>
#include <algorithm>
#include <random>

#define RED "\033[31m"
#define GREEN "\033[32m"
#define RESET "\033[0m"

class Span
{
    private:
        unsigned int        _cap;
        std::vector<int>    _container;
    public:
        Span();
        Span(unsigned int N);
        Span(const Span& rhs);
        ~Span();

        const Span& operator=(const Span& rhs);

        int     longestSpan();
        int     shortestSpan();
        void    addNumber(int n);
        int     generateNum();
        void    fill();

        class atCapException: public std::exception
        {
            public:
                const char* what() const noexcept override;
        };

        class tooFewElements: public std::exception
        {
            public:
                const char *what() const noexcept override;
        };
};