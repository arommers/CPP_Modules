/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   megaphone.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/11 10:03:07 by arommers      #+#    #+#                 */
/*   Updated: 2023/09/11 13:38:56 by arommers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main(int argc, char **argv)
{
    int i = 1;
    int j = 0;

    if (argc <= 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    while (argv[i])
    {
        j = 0;
        while (argv[i][j])
            std::cout << (char)toupper(argv[i][j++]);
        std::cout << " ";
        i++;
    }
    std::cout << std::endl;
    return (0);
}