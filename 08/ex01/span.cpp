/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   span.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/11 15:23:49 by arommers      #+#    #+#                 */
/*   Updated: 2024/01/22 12:56:32 by arommers      ########   odam.nl         */
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

unsigned int    Span::getCap() const {return (_cap);}
std::vector<int>     Span::getContainer() const {return (_container);}

void    Span::addNumber(int n)
{
    if (_container.size() >= _cap)
        throw atCapException();
    _container.push_back(n);
}

int Span::generateNum()
{
    return ((rand() % 2001) - 1000);
}

// int Span::generateNum()
// {
//     std::random_device  seed;       // Random device object (seed) for obtaining random numbers.
//     std::mt19937        n(seed());  // Mersenne Twister pseudo-random number generator (n) and seeds it with a value from the random device
    
//     return (n());                   // Generates and returns a pseudo-random number using the Mersenne Twister generator.
// }

void    Span::fill()
{
    size_t  filled = _container.size();
    _container.resize(_cap);
    
    auto beginIter = _container.begin() + filled;
    auto endIter = _container.end();
    std::generate(beginIter, endIter, [this]()
    {
        return (generateNum());
    });
}

int  Span::shortestSpan()
{
    if (_container.size() < 2)
        throw tooFewElements();

    std::vector<int> temp = _container;
    std::sort(temp.begin(), temp.end());
    unsigned int shortestSpan = std::numeric_limits<unsigned int>::max();
    for(unsigned int i = 1; i < temp.size(); i++)
    {
        unsigned int currentSpan = temp[i] - temp[i - 1];
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

std::ostream& operator<<(std::ostream& os, const Span& obj)
{
    int index = 0;
    os << "Stored in container: " << std::endl;
    for (const int& value : obj.getContainer())
    {
        os << value;
        if (++index % 10 == 0 && index != static_cast<int>(obj.getContainer().size()))
            os << std::endl;
        else
            os << " ";
    }
    return (os);
}
