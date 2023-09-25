/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   megaphone.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/11 10:03:07 by arommers      #+#    #+#                 */

/*   Updated: 2023/09/25 10:46:43 by arommers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include <string>

int main(int argc, char **argv)
{
    int i = 1;
    int j = 0;


    while (i < argc &&std::string(argv[i]).empty())
        i++;
    if (i >= argc)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else
    {
        while (argv[i])
        {
            j = 0;
            while (argv[i][j])
                std::cout << (char)toupper(argv[i][j++]);
            i++;
        }
        std::cout << std::endl;
    }
    return (0);
}