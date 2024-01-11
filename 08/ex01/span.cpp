/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   span.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/11 15:23:49 by arommers      #+#    #+#                 */
/*   Updated: 2024/01/11 16:24:28 by arommers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(): _cap(0) {}
Span::Span(unsigned int N): _cap(N) {}
Span::Span(const Span& rhs) {*this = rhs;}
Span::~Span() {}

const Span& Span::operator=(const Span& rhs)
{
    if (this != &rhs)
    {
        _cap = rhs._cap;
        _container = rhs._container;
    }
    return (*this);
}

void    Span::addNumber(int n)
{
    if (_container.size() >= _cap)
        throw atCapException();
    _container.push_back(n);
}

const char *Span::atCapException::what() const noexcept
{
    return ("Container is at capacity");
}
