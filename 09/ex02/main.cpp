/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/26 13:58:51 by arommers      #+#    #+#                 */
/*   Updated: 2024/01/28 21:29:27 by arommers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
    if (argc < 2)
    {
        std::cerr << "Error: Please provide: <./PmergeMe> <a list of non duplicate, positive numbers>..." << std::endl;
        return (1);
    }
    
    PmergeMe pmergeme;

    // Sort with vector
    auto startVec = std::chrono::high_resolution_clock::now();
    std::vector<int> sortedVector = pmergeme.sortVector(argv[1]);
    auto endVec = std::chrono::high_resolution_clock::now();
    auto durVec = std::chrono::duration_cast<std::chrono::microseconds>(endVec - startVec);

    // Sort with list
    auto startList = std::chrono::high_resolution_clock::now();
    std::list<int> sortedList = pmergeme.sortList(argv[1]);
    auto endList = std::chrono::high_resolution_clock::now();
    auto durList = std::chrono::duration_cast<std::chrono::microseconds>(endList - startList);

    // Print results
    std::vector<int> numbers = pmergeme.parseNumbers<std::vector<int>>(argv[1]);
    pmergeme.printResults(numbers, sortedVector, sortedList, durVec, durList);
    return (0);
}