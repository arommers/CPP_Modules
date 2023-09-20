/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   contact.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/11 14:15:47 by arommers      #+#    #+#                 */
/*   Updated: 2023/09/20 16:40:32 by arommers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{    
}

Contact::~Contact()
{
}

// Getter Functions

std::string Contact::GetFirstName() const
{
    return(this->_FirstName);
}

std::string Contact::GetLastName() const
{
    return(this->_LastName);
}

std::string Contact::GetNicktName() const
{
    return(this->_NickName);
}

std::string Contact::GetPhoneNr() const
{
    return(this->_PhoneNr);
}

std::string Contact::GetSecret() const
{
    return (this->_Secret);
}

int Contact::GetIndex()
{
    return (this->_index);
}

// Setter Functions

void    Contact::SetFirstName(std::string str)
{
    this->_FirstName = str;
}

void    Contact::SetLastName(std::string str)
{
    this->_LastName = str;
}

void    Contact::SetNickName(std::string str)
{
    this->_NickName = str;
}

void    Contact::SetPhoneNr(std::string str)
{
    this->_PhoneNr = str;
}

void    Contact::SetSecret(std::string str)
{
    this->_Secret = str;
}

void    Contact::SetIndex(int index)
{
    this->_index = index;
}

// Util functions

bool    Contact::IsEmpty() const
{
   return (_FirstName.empty());
}

bool    Contact::IsNr(const std::string str)
{
    unsigned long int i = 0;
    
    while (i < str.size())
    {
        if (!std::isdigit(str[i++]))
            return false;
    }
    return true;
}

std::string   Contact::MakeFit(std::string str)
{
    std::string tmp;
    
    tmp = str;
    if (tmp.size() > 10)
    {
        tmp.resize(10);
        tmp[9] = '.';
    }
    return (tmp);
}

std::string Contact::AddSpaces(std::string str, int i)
{
    std::string tmp = str;
    std::string spaces;
    
    while (i > 0)
    {
        spaces.append(" ");
        i--;
    }
    spaces.append(tmp);
    return (spaces);
}

void    Contact::Print()
{
    std::string tmp;
    
    std::cout << "------------------------------------------------------------------" << std::endl;
    std::cout <<"|    Index |First Name| Last Name| Nick Name|  PhoneNr.|    Secret|" << std::endl;
    std::cout << "------------------------------------------------------------------" << std::endl;
    std::cout << "|" << AddSpaces(tmp, 9) << this->GetIndex() + 1;
    tmp = MakeFit(this->GetFirstName());
    std::cout << "|" << AddSpaces(tmp, 10 - tmp.size());
    tmp = MakeFit(this->GetLastName());
    std::cout << "|" << AddSpaces(tmp, 10 - tmp.size());
    tmp = MakeFit(this->GetNicktName());
    std::cout << "|" << AddSpaces(tmp, 10 - tmp.size());
    tmp = MakeFit(this->GetPhoneNr());
    std::cout << "|" << AddSpaces(tmp, 10 - tmp.size());
    tmp = MakeFit(this->GetSecret());
    std::cout << "|" << AddSpaces(tmp, 10 - tmp.size()) << "|" << std::endl;
    std::cout << "------------------------------------------------------------------" << std::endl;
}
