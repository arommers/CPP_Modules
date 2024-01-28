/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PmergeMe.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/26 13:53:44 by arommers      #+#    #+#                 */
/*   Updated: 2024/01/28 21:24:02 by arommers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <algorithm>
#include <iostream>
#include <sstream>
#include <chrono>
#include <vector>
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
    std::vector<int> sortVector(const std::string& input);

    /*  ==================== LIST FUNCTIONS ====================  */

    void  binaryListInsert(std::list<int>& chainA, int value);
    void  makeListPairs(std::list<int>& input, std::list<int>& chainA, std::list<int>& chainB);
    void  insertListSort(std::list<int>& chainA, const std::list<int>& chainB);
    std::list<int> sortList(const std::string& input);

    /*  ==================== COMMON FUNCTIONS ====================  */
    
    int   jacobS(int n);
    void  printResults(const vec& input, vec sortedVec, li sortedList, const durType& durV,  const durType& durL);
    
    /*  ==================== Templates ====================  */
    
    template <typename T>
    T parseNumbers(int argc, char* argv[])
    {
        T numbers;

        for (int i = 1; i < argc; ++i) {
            try
            {
                int num = std::stoi(argv[i]);
                numbers.push_back(num);
            }
            catch (const std::invalid_argument& e)
            {
                throw InvalidIntegerException("Error: Invalid integer format: " + std::string(argv[i]));
            }
            catch (const std::out_of_range& e)
            {
                throw InvalidIntegerException("Integer out of range: " + std::string(argv[i]));
            }
        }

        return numbers;
    }
    
    // template <typename T>
    // T parseNumbers(const std::string& input)
    // {
    //   int num;
    //   T numbers;
    //   std::istringstream str(input);

    //   while (str >> num)
    //       numbers.push_back(num);

    //   return numbers;
    // }

    /*  ==================== Exceptions ====================  */
    
    class invalidValueException: public std::exception
    {
      public:
        const char *what() const noexcept override;
    };

    class negativeValueException: public std::exception
    {
      public:
        const char *what() const noexcept override;
    };
    
    class outOfRangeException: public std::exception
    {
      public:
        const char *what() const noexcept override;
    };

    class duplicateValueException: public std::exception
    {
      public:
        const char *what() const noexcept override;
    };  
};