// DESCRIPTION : Write a function which converts the input string to uppercase.

// My Solution:
#include <string>
#include <cctype>

std::string makeUpperCase(const std::string &input_str)
{
    int size = input_str.length();
    std::string new_string(size, ' '); // Initialize new_string with the same size as input_str

    for (int i = 0; i < size; ++i)
    {
        new_string[i] = toupper(input_str[i]); // Access and convert characters correctly
    }

    return new_string;
}
