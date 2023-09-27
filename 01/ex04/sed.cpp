/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sed.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: adri <adri@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/25 20:33:06 by adri          #+#    #+#                 */
/*   Updated: 2023/09/27 11:15:55 by arommers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

/*  Opens inFile filename to read from and outFile filename.replace to write to.
    While there are occurrences of 'str1' in the input line it replaces 'str1' with 'str2'.
    It does this by substring the inpu until the found 'str1' pasting 'str2' to the part 
    that was just substringed and pasting the rest of the input line to it.
    Then it updates the start position to behind 'str2' and repeats itself.
    when the loop finished it writes the modified line to output file
    and goes to the next line in the file. */

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
