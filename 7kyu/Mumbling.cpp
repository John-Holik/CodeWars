/*Description:
This time no story, no theory. The examples below show you how to write function accum:

Examples:
accum("abcd") -> "A-Bb-Ccc-Dddd"
accum("RqaEzty") -> "R-Qq-Aaa-Eeee-Zzzzz-Tttttt-Yyyyyyy"
accum("cwAt") -> "C-Ww-Aaa-Tttt"
The parameter of accum is a string which includes only letters from a..z and A..Z.

My Solution: */

#include <string>
#include <vector>

class Accumul
{
public:
    static std::string accum(const std::string &s);
};

std::string Accumul::accum(const std::string &s)
{
    std::string accumStr = ""; // String that is going to hold result and be appended
    char letter; // Used to hold each char until it is appended to the string
    int length = s.length(); // Get the length of the string passed in order to correctly traverse for loop
    for (int i = 0; i < length; i++) // Traverses through each index in the string
    {
        letter = s[i];
        accumStr += toupper(letter); // First letter of the result is always capitialized 
        for (int j = 0; j < i; j++) // Second loop adds all of the lower case letters 
        {
            letter = s[i];
            accumStr += tolower(letter);
        }
        if (i != length - 1)
            accumStr += "-"; // If it moves on to the next index in the string, add a -, if it is the end of the string do not add a -
    }
    return accumStr; 
}