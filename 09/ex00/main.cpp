#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
    (void) argc;
    (void) argv;
    
    BitcoinExchange example("./data.csv");
    example.printMap();

    return (0);
}