/*Description:
Complete the method that takes a boolean value and return a "Yes" string for true, or a "No" string for false.

My Solution:  */

#include <string>

std::string bool_to_word(bool value)
{
    if (value)
        return "Yes";
    else
        return "No";
}