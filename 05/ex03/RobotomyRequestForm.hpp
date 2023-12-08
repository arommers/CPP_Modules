/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RobotomyRequestForm.hpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/07 13:59:00 by arommers      #+#    #+#                 */
/*   Updated: 2023/12/07 16:11:34 by arommers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
#include "Bureaucrat.hpp"

class RobotRequestForm: public AForm
{
    private:
        const std::string _target;
    public:
        RobotRequestForm(const std::string& target);
        RobotRequestForm(const RobotRequestForm& original);
        RobotRequestForm& operator=(const RobotRequestForm& rhs);
        ~RobotRequestForm();

    void    execute(const Bureaucrat& executor) const;
    
};