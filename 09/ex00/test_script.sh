#!/bin/bash

# Define color codes
GREEN="\e[32m"
RESET="\e[0m"

# Define the main input file
valid_input="provided_main_example.txt"
echo "date | value" > "$valid_input"
echo "2011-01-03 | 3" >> "$valid_input"
echo "2011-01-03 | 2" >> "$valid_input"
echo "2011-01-03 | 1" >> "$valid_input"
echo "2011-01-03 | 1.2" >> "$valid_input"
echo "2011-01-09 | 1" >> "$valid_input"
echo "2012-01-11 | -1" >> "$valid_input"
echo "2012-01-11 | 1" >> "$valid_input"
echo "2012-01-11 | 2147483648" >> "$valid_input"

# Define the invalid date format input file
invalid_date_input="invalid_date_input.txt"
echo "date | value" > "$invalid_date_input"
echo "2008-12-31 | 1" > "$invalid_date_input"
echo "2011/01/03 | 3" >> "$invalid_date_input"
echo "2011-13-03 | 2" >> "$invalid_date_input"
echo "2011-01-32 | 1" >> "$invalid_date_input"

# Define the invalid value format input file
invalid_value_input="invalid_value_input.txt"
echo "date | value" > "$invalid_value_input"
echo "2011-01-03 | abc" >> "$invalid_value_input"
echo "2011-01-03 | 1.2.3" >> "$invalid_value_input"
echo "2011-01-03 | -1.2" >> "$invalid_value_input"
echo "2011-01-03 | 2375795295" >> "$invalid_value_input"

# Define the missing delimiter input file
missing_delimiter_input="missing_delimiter_input.txt"
echo "date | value" > "$missing_delimiter_input"
echo "2011-01-03 3" >> "$missing_delimiter_input"
echo "2011 - 01 - 03    |   3   " >> "$missing_delimiter_input"

# Define the multiple delimiters input file
multiple_delimiters_input="multiple_delimiters_input.txt"
echo "date | value" > $multiple_delimiters_input
echo "2013-04-04 | 1 | 1" >> $multiple_delimiters_input
echo "2013-04-04 | |" >> $multiple_delimiters_input
echo "2013-04-04 |||" >> $multiple_delimiters_input

# Define the empty input file
empty_input="empty_input.txt"
touch "$empty_input"

# Define the empty date input file
empty_date_input="empty_date_input.txt"
echo "date | value" > "$empty_date_input"
echo " | 3" >> "$empty_date_input"

# Define the empty value input file
empty_value_input="empty_value_input.txt"
echo "date | value" > "$empty_value_input"
echo "2011-01-03 |" >> "$empty_value_input"

# Define the empty line file
empty_line_input="empty_line_input.txt"
echo "data | value" > $empty_line_input
echo "2012-09-27 | 4.2" >> $empty_line_input
echo "2012-03-03 | 1" >> $empty_line_input
echo "" >> $empty_line_input
echo "2012-06-15 | 2" >> $empty_line_input

# Define the special characters input file
special_characters_input="special_characters_input.txt"
echo "date | value" > "$special_characters_input"
echo "2011-01-03 | @" >> "$special_characters_input"
echo "2011-01-03 | #" >> "$special_characters_input"

# Define the large values input file
large_values_input="large_values_input.txt"
echo "date | value" > "$large_values_input"
echo "2011-01-03 | 999.99" >> "$large_values_input"
echo "2011-01-03 | 1000" >> "$large_values_input"

# Define the script to execute
script="./btc"

# Clear the terminal
clear

# Run the script with each input file
for input_file in "$valid_input" "$invalid_date_input" "$invalid_value_input" "$missing_delimiter_input"      \
                  "multiple_delimiters_input.txt" "$empty_input" "empty_date_input.txt" "$empty_value_input"  \
                  "empty_line_input.txt" "$special_characters_input" "$large_values_input"
do
  echo -e "${GREEN}Running $script with $input_file${RESET}"
  $script "$input_file"
  echo ""
done

# Clean up temporary files
rm -f "$valid_input" "$invalid_date_input" "$invalid_value_input" "$missing_delimiter_input"      \
      "multiple_delimiters_input.txt" "$empty_input" "empty_date_input.txt" "$empty_value_input"  \
      "empty_line_input.txt" "$special_characters_input" "$large_values_input"
