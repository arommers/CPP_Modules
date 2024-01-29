/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PmergeMe.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/26 13:53:44 by arommers      #+#    #+#                 */
/*   Updated: 2024/01/29 11:45:37 by arommers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <algorithm>
#include <iostream>
#include <sstream>
#include <limits>
#include <chrono>
#include <vector>
#include <cstring>
#include <list>

typedef std::chrono::microseconds durType;
typedef std::vector<int> vec;
typedef std::list<int> li;

class PmergeMe
{
    
  public:
    PmergeMe();
    PmergeMe(const PmergeMe& rhs);
    ~PmergeMe();

    const PmergeMe& operator=(const PmergeMe& rhs);
    
  /*  ==================== VECTOR FUNCTIONS ====================  */

    // std::vector<int> parseNumbers(const std::string& input);
    void  binaryVecInsert(std::vector<int>& chainA, int start, int len, int value);
    void  makeVecPairs(std::vector<int>& input, std::vector<int>& chainA, std::vector<int>& chainB);
    void  insertVecSort(std::vector<int>& chainA, std::vector<int>& chainB);
    std::vector<int> sortVector(int argc, char **argv);

    /*  ==================== LIST FUNCTIONS ====================  */

    void  binaryListInsert(std::list<int>& chainA, int value);
    void  makeListPairs(std::list<int>& input, std::list<int>& chainA, std::list<int>& chainB);
    void  insertListSort(std::list<int>& chainA, const std::list<int>& chainB);
    std::list<int> sortList(int argc, char **argv);

    /*  ==================== COMMON FUNCTIONS ====================  */
    
    int   jacobS(int n);
    void  printResults(const vec& input, vec sortedVec, li sortedList, const durType& durV,  const durType& durL);

    /*  ==================== Exceptions ====================  */

    class negativeValueException: public std::exception
    {
      public:
        const char *what() const noexcept override;
    };
    
    /*  ==================== Templates ====================  */
    
    template <typename T>
    T parseNumbers(int argc, char **argv)
    {
        T numbers;

        for (int i = 1; i < argc; ++i)
        {
            try
            {
                int num = std::stoi(argv[i]);
                if (num < 0)
                  throw negativeValueException();
                numbers.push_back(num);
            }
            catch (const std::out_of_range& e)
            {
              std::cerr << "Out of range error: " << e.what() << std::endl;
              exit(EXIT_FAILURE);
            }
            catch (const std::invalid_argument& e)
            {
              std::cerr << "Invalid argument error: " << e.what() << std::endl;
              exit(EXIT_FAILURE);
            }
            catch(const std::exception& e)
            {
                std::cerr << e.what() << std::endl;
                exit(EXIT_FAILURE);
            }
        }
        return numbers;
    }
};