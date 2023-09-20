/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   megaphone.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/11 10:03:07 by arommers      #+#    #+#                 */
/*   Updated: 2023/09/20 22:01:34 by adri          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include <string>

int main(int argc, char **argv)
{
    int i = 1;
    int j = 0;

    if (argc <= 1 || std::string(argv[i]).empty())
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    while (argv[i])
    {
        j = 0;
        while (argv[i][j])
            std::cout << (char)toupper(argv[i][j++]);
        // std::cout << " ";
        i++;
    }
    std::cout << std::endl;
    return (0);
}