/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: adri <adri@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/07 12:29:03 by adri          #+#    #+#                 */
/*   Updated: 2023/10/08 12:10:22 by adri          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include "Animal.hpp"

class   Brain
{
    private:
        std::string _ideas[100];
    public:
        Brain();
        Brain(const Brain& orginal);
        Brain&  operator=(const Brain& rhs);
        ~Brain();

        std::string getIdea(int index) const;
        void        setIdea(int index, std::string idea);
};

#endif