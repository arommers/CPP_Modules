/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Phonebook.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/11 14:16:39 by arommers      #+#    #+#                 */
/*   Updated: 2023/09/20 16:16:39 by arommers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
    private:
        Contact _contacts[8];
        int     _index;
    
    public:
        PhoneBook();
        ~PhoneBook();
        
        void        Add();
        void        Search();
        void        PrintAll();
        void        Fill(Contact *contacts);
        Contact     *GetContacts();
        void        GetInput(std::string& input, const std::string& prompt, const std::string& error);
};

#endif