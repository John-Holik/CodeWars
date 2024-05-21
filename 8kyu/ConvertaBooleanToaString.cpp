// DESCRIPTION : Implement a function which convert the given boolean
// value into its string representation.

// My Solution:
#include <string>

std::string boolean_to_string(bool b)
{
    if (b)
        return "true";
    else
        return "false";
}