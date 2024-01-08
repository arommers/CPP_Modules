/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   whatever.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/08 11:08:14 by arommers      #+#    #+#                 */
/*   Updated: 2024/01/08 11:24:49 by arommers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T>
T max(T a, T b)
{
    return (a > b) ? a : b;
}

template <typename T>
T min (T a, T b)
{
    return(a < b) ? a : b;
}

template <typename T>
void swap(T &a, T &b)
{
    T   c;
    
    c = a;
    a = b;
    b = c;
}