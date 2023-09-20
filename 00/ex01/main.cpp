/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/13 16:27:50 by arommers      #+#    #+#                 */
/*   Updated: 2023/09/20 16:21:12 by arommers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int main()
{
    std::string input;
    PhoneBook   phonebook;
    
    while (true)
    {
        getline(std::cin, input);
        if (std::cin.eof())
            break ;
        if (input == "EXIT")
            break ;
        if (input == "ADD")
            phonebook.Add();
        if (input == "SEARCH")
            phonebook.Search();
        if (input == "FILL")
            phonebook.Fill(phonebook.GetContacts());
        if (input == "PRINT")
            phonebook.PrintAll();
        std::cout << ">> ";
    }
    std::cout << std::endl;
    return (0);
}