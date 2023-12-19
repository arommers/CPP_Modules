/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Types.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/19 11:24:20 by arommers      #+#    #+#                 */
/*   Updated: 2023/12/19 14:51:07 by arommers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <sstream>
#include <string>
#include <limits>

bool    pseudoCheck(const std::string& input);
bool    charCheck(const std::string& input);
bool    intCheck(const std::string& input);
bool    floatCheck(const std::string& input);
bool    doubleCheck(const std::string& input);

void    printPseudo(const std::string& input);
void    convertChar(const std::string& input);
void    convertInt(const std::string& input);
void    convertFloat(const std::string& input);
void    convertDouble(const std::string& input);


