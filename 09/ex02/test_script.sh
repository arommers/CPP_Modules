#!/bin/bash

exe=./PmergeMe

# Define color codes
RED="\e[31m"
BLUE="\e[34m"
GREEN="\e[32m"
RESET="\e[0m"

# list of valid input

valid=(
    "5 3 8 0 1 8 14"
    "10 5 8 3 7 2 1 6 9 4"
    "100 21 3495 4 506"
    "15 20 10 5 25 30"
    "5 4 7 7 0 3 12 98"
    "   1   0 8 9   3  "
)

# list of invalid input
invalid=(
    ""
    "122 -4 0 24 -3"
    "32132323312312313767 5 90 23"
    "14 5 9 a 7 b"
)

echo -e "${GREEN}*** Running PmergeMe with a list of valid arguments: *** ${RESET}"
echo ""

for index in "${valid[@]}";
do
    echo "Running ./PmergeMe with: $index"
    $exe $index
    echo ""
done

echo -e "${GREEN}Press 'ENTER' to show a test of randomly generated input...\t*** warning mucho output ***${RESET}"
read -r

 $exe `shuf -i 1-100000 -n 3000 | tr "\n" " "`

echo ""
echo -e "${RED}Press 'ENTER' to show a list of tests with invalid arguments... ${RESET}"
read -r

echo -e "${RED}*** Running PmergeMe with a list of invalid arguments: ***${RESET}"
echo ""

for index in "${invalid[@]}";
do
    echo "running $exe with: $index"
    $exe $index
    echo ""
done
