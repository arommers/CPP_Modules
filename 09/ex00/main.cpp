#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cerr << "Error: Please provide: <./btc> <inputfile> " << std::endl;
        return (1);
    }

    const std::string infile = argv[1];
    BitcoinExchange BTX("./data.csv");
    BTX.parseInfile(infile);
    // example.printMap();

    return (0);
}