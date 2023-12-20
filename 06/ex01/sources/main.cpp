/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/20 13:08:03 by arommers      #+#    #+#                 */
/*   Updated: 2023/12/20 13:27:12 by arommers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include "Serializer.hpp"

int main()
{
    Data        oldData;
    Data        *newData;
    uintptr_t   ptr;

    oldData.value = 42;
    
    std::cout << "Address of the old Data struct: " << &oldData << std::endl;
    std::cout << "pre-serialized Value of old Data: " << oldData.value << std::endl;
    ptr = Serializer::serialize(&oldData);
    std::cout << "Value of our temporary uintptr after serialization: " << ptr << std::endl;
    newData = Serializer::deserialize(ptr);
    std::cout << "Address of the new Data struct: " << newData << std::endl;
    std::cout << "Deserialized Value of new Data: " << newData->value << std::endl;
    
    return (0);
}