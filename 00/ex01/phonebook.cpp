/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   phonebook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/11 13:56:26 by arommers      #+#    #+#                 */
/*   Updated: 2023/09/20 22:19:37 by adri          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

PhoneBook::PhoneBook()
{
    this->_index = 0;
    std::cout << std::endl;
    std::cout << " ***** Welcome to arommers's phonebook simulator *****" << std::endl;
    std::cout << std::endl;
    std::cout << "Please use one of he following commands to operate our phonebook:" << std::endl;
    std::cout << "- ADD to add a new entry" << std::endl;
    std::cout << "- SEARCH to look for a specfic entry," << std::endl;
    std::cout << "- EXIT to exit the simulator" << std::endl;
    std::cout << std::endl;
    std::cout << "How can we be of service today?" << std::endl;
    std::cout << ">> ";
}

PhoneBook::~PhoneBook()
{
    std::cout << "Thank you for using arommers's phonebook simulator!" << std::endl;
    std::cout << "We hope you have a splendid day" <<std:: endl;
}

Contact    *PhoneBook::GetContacts()
{
    return (_contacts);
}

void    PhoneBook::GetInput(std::string& input, const std::string& prompt, const std::string& error)
{
    while (true)
    {
        input.clear();
        std::cout << prompt;
        std::getline(std::cin, input);
        if (std::cin.eof())
        {
            std::cout << std::endl;
            std::cout << "Thank you for using arommers's phonebook simulator!" << std::endl;
            std::cout << "We hope you have a splendid day" <<std:: endl;
            exit (0) ;
        }
        if (input.empty())
            std::cout << error << std::endl;
        else
            break ;
    }
}

void    PhoneBook::Add()
{
    std::string f_name, l_name, n_name, phone_nr, secret;

    if (!this->_contacts[7].IsEmpty())
        std::cout << "Please be aware that you are now replacing one of our current entries" << std::endl;
    
    GetInput(f_name, "Please provide a first name: ", "First name cannot be empty.");
    GetInput(l_name, "Please provide " + f_name + "'s last name: ", "Last name cannot be empty");
    GetInput(n_name, "Please provide " + f_name + "'s nickname: ", "Nickname cannot be empty");
    GetInput(phone_nr, "Please provide " + f_name + "'s phonenumber: ", "Phone number cannot be empty");
    while (phone_nr.size() != 10 || !this->_contacts->IsNr(phone_nr))
    {
        std::cout << "Phonenumber needs to be a valid 10 digit number." << std::endl;
        GetInput(phone_nr, "Please provide " + f_name +"'s phonenumber: ", "Phone number cannot be empty");
    }
    GetInput(secret, "Spill " + f_name + "'s dirty little secret: ", "Come on now... don't be shy.");

    this->_contacts[_index % 8].SetFirstName(f_name);
    this->_contacts[_index % 8].SetLastName(l_name);
    this->_contacts[_index % 8].SetNickName(n_name);
    this->_contacts[_index % 8].SetPhoneNr(phone_nr);
    this->_contacts[_index % 8].SetSecret(secret);
    this->_contacts[_index % 8].SetIndex(_index % 8);
    
    std::cout << f_name + " " + l_name + " has now been added to our phonebook" << std::endl;
    
    this->_index++;
}

void PhoneBook::Search()
{
    int i;
    std::string input;
    
    if (this->_contacts[0].IsEmpty())
    {
        std::cout << "Our phonebook is currently empty" << std::endl;
        return;
    }
    PrintAll();
    while (true) 
    {
        std::cout << "Please provide the index of the entry you would like to be displayed: ";
        if (std::cin >> input && input.size() == 1 && input[0] >= '1' && input[0] <= '8')
        {
            i = input[0] - '0' - 1;
            if (this->_contacts[i].IsEmpty())
                std::cout << "This entry is currently empty" << std::endl; 
            else
            {
               this->_contacts[i].Print();
                std::cin.clear();
                std::cin.ignore();
                break;
            }
        }
        else if (std::cin.eof())
        {
            std::cout << std::endl;
            std::cout << "Thank you for using arommers's phonebook simulator!" << std::endl;
            std::cout << "We hope you have a splendid day" << std::endl;
            exit(0);
        } 
        else 
        {
            std::cout << "Please provide a valid index between 0 and 9" << std::endl;
            std::cin.clear();
            std::cin.ignore(100, '\n');
        }
    }
}

void PhoneBook::Fill(Contact *contacts)
{
    std::string firstNames[8] = {"John", "Jane", "Michael", "Emily", "David", "Sarah", "Robert", "Olivia"};
    std::string lastNames[8] = {"Doe", "Smith", "Johnson", "Brown", "Taylor", "Anderson", "Williams", "Jones"};
    std::string nicknames[8] = {"JD", "Jenny", "Mike", "Em", "Dave", "Sara", "Bob", "Liv"};
    std::string phoneNumbers[8] = {"5550001234", "5550005678", "5550007890", "5550002345", "5550006789", "5550008901", "5550003456", "5550006789"};
    std::string secrets[8] = {"Secret1", "Secret2", "Secret3", "Secret4", "Secret5", "Secret6", "Secret7", "Secret8"};

    for (int i = 0; i < 8; ++i)
    {
        contacts[i].SetFirstName(firstNames[i]);
        contacts[i].SetLastName(lastNames[i]);
        contacts[i].SetNickName(nicknames[i]);
        contacts[i].SetPhoneNr(phoneNumbers[i]);
        contacts[i].SetSecret(secrets[i]);
        contacts[i].SetIndex(i);
    }
    this->_contacts->SetIndex(8);
}


void    PhoneBook::PrintAll()
{
    int         i = 0;
    std::string tmp;

    std::cout << "---------------------------------------------" << std::endl;
    std::cout <<"|    Index |First Name| Last Name| Nick Name|" << std::endl;
    std::cout << "---------------------------------------------" << std::endl;
    while (i < 8 && !this->_contacts[i].IsEmpty())
    {
        tmp.clear();
        std::cout << "|" << _contacts->AddSpaces(tmp, 9) << i + 1;
        tmp = _contacts->MakeFit(_contacts[i].GetFirstName());
        std::cout << "|" << _contacts->AddSpaces(tmp, 10 - tmp.size());
        tmp = _contacts->MakeFit(_contacts[i].GetLastName());
        std::cout << "|" << _contacts->AddSpaces(tmp, 10 - tmp.size());
        tmp = _contacts->MakeFit(_contacts[i].GetNicktName());
        // std::cout << "|" << _contacts->AddSpaces(tmp, 10 - tmp.size());
        // tmp = _contacts->MakeFit(_contacts[i].GetPhoneNr());
        // std::cout << "|" << _contacts->AddSpaces(tmp, 10 - tmp.size());
        // tmp = _contacts->MakeFit(_contacts[i].GetSecret());
        std::cout << "|" << _contacts->AddSpaces(tmp, 10 - tmp.size()) << "|" << std::endl;
        std::cout << "---------------------------------------------" << std::endl;
        i++;
    }
}
