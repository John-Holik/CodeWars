/* Description:
Can you find the needle in the haystack?
Write a function findNeedle() that takes an array full of junk but containing one "needle"
After your function finds the needle it should return a message (as a string) that says:
"found the needle at position " plus the index it found the needle, so:

My Solution:  */

#include <vector>
#include <string>

std::string findNeedle(const std::vector<std::string> &haystack)
{
    int pos = 0;
    for (const auto &hay : haystack) // Iterate through haystack vector 
    {
        if (hay == "needle") // Checks value at current index 
            return "found the needle at position " + std::to_string(pos); // If true, found where needle is in haystack
        else
            pos += 1; // If False, increment index counter
    }
}