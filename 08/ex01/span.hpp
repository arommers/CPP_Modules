/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   span.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/11 15:24:04 by arommers      #+#    #+#                 */
/*   Updated: 2024/01/11 16:30:17 by arommers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <algorithm>

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

        void    addNumber(int n);
        size_t  shortestSpan();
        size_t  longestSpan();

        class atCapException: public std::exception
        {
            public:
                const char* what() const noexcept override;
        };
};