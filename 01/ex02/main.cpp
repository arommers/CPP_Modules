/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: adri <adri@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/23 13:57:41 by adri          #+#    #+#                 */
/*   Updated: 2023/09/23 14:12:32 by adri          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main (void)
{
    std::string     str = "HI THIS IS BRAIN";
    std::string*    strPTR = &str;
    std::string&    strREF = str;
    
    std::cout << std::endl;
    std::cout << "The memory address of our string is:       " << &str << std::endl;
    std::cout << "The memory address held by our strPTR is : " << strPTR << std::endl;
    std::cout << "The memory address held by our strREF is : " << &strREF << std::endl;
    std::cout << std::endl;
    std::cout << "The value of our string is:        " << str << std::endl;
    std::cout << "The value pointed to by strPTR is: " << *strPTR << std::endl;
    std::cout << "The value pointed to by strREF is: " << strREF << std::endl;
    std::cout << std::endl;
    
    return (0);
}