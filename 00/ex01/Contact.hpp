/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/11 14:15:59 by arommers      #+#    #+#                 */
/*   Updated: 2023/09/16 15:05:56 by adri          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <cstdlib>
#include <string>
#include <cctype>

class Contact
{
    private:
        std::string _FirstName;    
        std::string _LastName;    
        std::string _NickName;    
        std::string _PhoneNr;
        std::string _Secret;
        int         _index;
        
    public:
        Contact();
        ~Contact();
        
        std::string GetFirstName() const;
        std::string GetLastName() const;
        std::string GetNicktName() const;
        std::string GetPhoneNr() const;
        std::string GetSecret() const;
        int         GetIndex();

        void        SetFirstName(std::string str);
        void        SetLastName(std::string str);
        void        SetNickName(std::string str);
        void        SetPhoneNr(std::string str);
        void        SetSecret(std::string str);
        void        SetIndex(int index);

        
        void        Print();
        bool        IsEmpty() const;
        bool        IsNr(const std::string str);
        std::string MakeFit(std::string str);
        std::string AddSpaces(std::string str, int i);
};

#endif