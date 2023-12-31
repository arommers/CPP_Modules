/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Scalar.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/11 13:59:52 by arommers      #+#    #+#                 */
/*   Updated: 2023/12/19 11:35:44 by arommers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <sstream>
#include <string>


/*  A static method is a class member function that belongs to the class itself, rather than to instances of the class.
    It can be called using the class name, without the need to create an object of the class. */

class ScalarConverter
{
    private:
        ScalarConverter();  
        ScalarConverter(const ScalarConverter& original);
        ScalarConverter&    operator=(const ScalarConverter& rhs);
        ~ScalarConverter();
    public:
        static void convert(const std::string& input);
};
