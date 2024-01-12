/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/08 10:59:36 by arommers      #+#    #+#                 */
/*   Updated: 2024/01/08 12:35:54 by arommers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "templates.hpp"

int main( void )
{
    int a = 2;
    int b = 3;
    
    ::swap(a, b);
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    std::cout << std::endl;
    
    std::string c = "string1";
    std::string d = "string2";
    
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
    std::cout << std::endl;

    std::string empty1 = "";
    std::string empty2 = "string";

    ::swap(empty1, empty2);
    std::cout << "empty1 = " << empty1 << ", empty2 = " << empty2 << std::endl;
    std::cout << std::endl;
    std::cout << "min( empty1, empty2 ) = " << ::min( empty1, empty2 ) << std::endl;
    std::cout << "max( empty1, empty2 ) = " << ::max( empty1, empty2 ) << std::endl;

    return (0);
}