/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Source.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: adri <adri@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/11 14:18:51 by adri          #+#    #+#                 */
/*   Updated: 2023/10/11 14:45:18 by adri          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SOURCE_HPP
# define SOURCE_HPP

#include "AMateria.hpp"

class   IMateriaSource
{
    public:
    virtual ~IMateriaSource() {}
    virtual void learnMateria(AMateria*) = 0;
    virtual AMateria* createMateria(std::string const & type) = 0;
};

class   MateriaSource: public IMateriaSource
{
        private:
            int         _shelf;
            AMateria    *_cupboard[4];
        public:
            MateriaSource();
            MateriaSource(const MateriaSource& original);
            MateriaSource&  operator=(const MateriaSource& rhs);
            ~MateriaSource();

            void    learnMateria(AMateria* m);
            AMateria*   createMateria(const std::string& type );
};

#endif