/*Description:
Write a function to convert a name into initials. This kata strictly takes two words with one space in between them.
The output should be two capital letters with a dot separating them.

My Solution:  */

#include <string>

std::string abbrevName(std::string name)
{
    std::string abvName = "";
    abvName += toupper(name[0]); // Get first Inital
    abvName += "."; // Add "."

    int length = name.length();
    char space = ' '; // Var to check for space in Name seperating first and last
    for (int i = 1; i < length; i++)
    { // Find Second Inital
        if (name[i] == space)
        {
            abvName += toupper(name[i + 1]); // Append the second inital
        }
    }
    return abvName;
}