/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Serializer.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/20 12:37:36 by arommers      #+#    #+#                 */
/*   Updated: 2023/12/20 13:03:50 by arommers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cstdint>
struct Data;

class Serializer
{
    private:
        Serializer();
        Serializer(const Serializer& original);
        Serializer& operator=(const Serializer& rhs);
        ~Serializer();
    public:

    static uintptr_t serialize(Data* ptr);
    static Data* deserialize(uintptr_t raw);
    
};