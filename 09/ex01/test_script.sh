#!/bin/bash

# Define color codes
RED="\e[31m"
BLUE="\e[34m"
GREEN="\e[32m"
RESET="\e[0m"

# list of valid input
valid=(
    "8 9 * 9 - 9 - 9 - 4 - 1 +"     # Result: ((8 * 9) - 9) - 9 - 4 - 1       Sum: -1
    "7 7 * 7 -"                     # Result: (7 * 7) - 7                     Sum: 42
    "1 2 * 2 / 2 * 2 4 - +"         # Result: (((1 * 2) / 2) * 2) + 4 - 2     Sum: 6
    "2 3 + 4 *"                     # Result: (2 + 3) * 4                     Sum: 20
    "5 6 + 7 8 - *"                 # Result: (5 + 6) * (7 - 8)               Sum: -11
    "9 2 / 4 * 7 8 * -"             # Result: ((9 / 2) * 4) - (7 * 8)         Sum: -36
    "6 2 / 3 * 4 5 * +"             # Result: ((6 / 2) * 3) + (4 * 5)         Sum: 23
    "2 3 4 * + 5 6 * -"             # Result: ((2 + (3 * 4)) - (5 * 6))       Sum: -20
    "5 3 7 0 4 + + - *"             # Resulr: (5 * ( 3 + (7 - (0 + 4))))      Sum: -40 
)

#list of invalid input
invalid=(
  ""                    # Empty string
  "(1 + 1)"             # Parentheses not allowed
  "8 0 /"               # Division by zero
  "3 4 * abc +"         # Invalid characters in the expression
  "5 & - 6 7 + +"       # Invalid characters in the expression
  "3 14 +"              # Double digit numbers
  "-1 5 * 3 +"          # Negative numbers
  "1.3 5 *"             # Decimal numbers
  "5 4 7 +"             # Too few operator to execute
  "1 2 + + +"           # Too many operators
  "5 8 + 9 4 -"         # Too few operator
  "3 4 * 7 / 1 - +"     # Too many operands
  "1 2 * 2 / 2 * 2 4 -" # Too few operands
  "+ - * /"             # No operands
)

exe=./RPN

echo -e "${RED}Running RPN without arguments: ${RESET}"
$exe
echo ""

echo -e "${GREEN}Running RPN with a list of valid arguments: ${RESET}"
echo ""
for index in "${valid[@]}";
do
    echo "Running $exe with: $index"
    ./RPN "$index"
    echo ""
done

echo -e "${BLUE}Press 'enter' to show a list of tests with invalid arguments... ${RESET}"
read -r

echo -e "${RED}Running RPN with a list of invalid arguments: ${RESET}"
echo ""
for index in "${invalid[@]}";
do
    echo "Running $exe with: $index"
    ./RPN "$index"
    echo ""
done

