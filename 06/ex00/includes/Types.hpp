/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Types.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/19 11:24:20 by arommers      #+#    #+#                 */
/*   Updated: 2023/12/19 11:39:31 by arommers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <sstream>
#include <string>

bool    charCheck(const std::string& input);
bool    intCheck(const std::string& input);

void    convertChar(const std::string& input);
void    convertInt(const std::string& input);


