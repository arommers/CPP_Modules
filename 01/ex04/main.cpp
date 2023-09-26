/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: adri <adri@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/24 14:10:49 by adri          #+#    #+#                 */
/*   Updated: 2023/09/26 18:59:02 by adri          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

int main(int argc, char **argv)
{
    std::string fileName;
    std::string str1;
    std::string str2;

    if(argc != 4)
    {
        std::cerr << "ERROR. Please provide: <./sed> <filename> <str1> <str2>\n";
        return (1);
    }

    fileName = argv[1];
    str1 = argv[2];
    str2 = argv[3];
    
    if (str1.empty() || str2.empty())
    {
        std::cerr << "ERROR. str1 and/or two can't be empty\n";
        return (1);
    }
    
    replaceStrings(fileName, str1, str2);
    
    return (0);
}