/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   iter.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/08 11:53:02 by arommers      #+#    #+#                 */
/*   Updated: 2024/01/08 12:46:44 by arommers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

/* When using a function template, the template parameters are not automatically deduced
when you pass the function template as an argument to another function template.
The type needs to be explicitly specified or deduced using a helper function or a type deduction guide. */

template<typename T>
void printelements(T& i)
{
    std::cout << i << " ";
}

template<typename T1, typename T2, typename T3>
void iter(T1 *array, T2 len, T3 func)
{
    for (T2 i = 0; i < len; i++)
        func(array[i]);
}