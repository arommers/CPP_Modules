/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sed.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/25 11:34:44 by arommers      #+#    #+#                 */
/*   Updated: 2023/09/25 20:48:58 by adri          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
# define SED_HPP

#include <iostream>
#include <fstream>
#include <string>

void    replaceStrings(std::string& filename, std::string& str1, std::string& str2);

#endif