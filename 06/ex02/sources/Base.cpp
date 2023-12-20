/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Base.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/20 14:41:06 by arommers      #+#    #+#                 */
/*   Updated: 2023/12/20 16:15:32 by arommers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base() {}

Base * generate(void)
{
    switch (std::rand() % 3)
    {
        case 0:
            std:: cout << "Generated an A class" << std::endl;
            return (new A);
        case 1:
            std:: cout << "Generated a B class" << std::endl;
            return (new B);
        case 2:
            std:: cout << "Generated a C class" << std::endl;
            return (new C);
        default:
            return (nullptr);
    }
}

void    identify(Base* p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "It's an A class" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "It's a B class" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "It's a C class" << std::endl;
    else
        std::cout << "It's an unknown class" << std::endl;
}
