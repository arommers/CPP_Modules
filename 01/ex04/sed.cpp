/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sed.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: adri <adri@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/25 20:33:06 by adri          #+#    #+#                 */
/*   Updated: 2023/09/26 19:13:26 by adri          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

void    replaceStrings(std::string& filename, std::string& str1, std::string& str2)
{
    std::string input;
    size_t      start;
    size_t      pos;
    
    std::ifstream inFile(filename);
    if(!inFile)
    {
        std::cerr << "Something went wrong with trying to open " << filename << "\n";
        return ;
    }
    std::ofstream outFile(filename + ".replace");
    if(!outFile)
    {
        std::cerr << "Something went wrong with trying to write to " << filename << ".replace\n";
        return ;
    }
    while(std::getline(inFile, input))
    {
        start = 0;
        while ((pos = input.find(str1, start)) != std::string::npos)
        {
            input = input.substr(0, pos) + str2 + input.substr(pos + str1.length());
            start = pos + str2.length();
        }
        outFile << input << "\n";
    }
    
}
