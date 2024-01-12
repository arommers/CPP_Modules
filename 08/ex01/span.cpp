/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   span.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/11 15:23:49 by arommers      #+#    #+#                 */
/*   Updated: 2024/01/12 12:31:08 by arommers      ########   odam.nl         */
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

int Span::generateNum()
{
    std::random_device  seed;
    std::mt19937        n(seed());
    
    return (n());   
}

void    Span::fill()
{
    _container.resize(_cap);
    std::generate(_container.begin(), _container.end(), [this]()
    {
        return (generateNum());
    });
}

int  Span::shortestSpan()
{
    if (_container.size() < 2)
        throw tooFewElements();

    std::sort(_container.begin(), _container.end());
    unsigned int shortestSpan = std::numeric_limits<unsigned int>::max();
    for(unsigned int i = 1; i < _container.size(); i++)
    {
        unsigned int currentSpan = _container[i] - _container[i - 1];
        shortestSpan = std::min(shortestSpan, currentSpan);
    }
    return (shortestSpan);
}

int  Span::longestSpan()
{
    if (_container.size() < 2)
        throw tooFewElements();
        
    auto longestSpan = std::minmax_element(_container.begin(), _container.end());
    return (*longestSpan.second - *longestSpan.first);  
}

const char *Span::atCapException::what() const noexcept
{
    return ("Container is at capacity");
}

const char *Span::tooFewElements::what() const noexcept
{
    return ("Container needs at least two elements to calculate the span");
}
