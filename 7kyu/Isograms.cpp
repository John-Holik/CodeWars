/*Description:
An isogram is a word that has no repeating letters, consecutive or non-consecutive. Implement a function that determines whether a string that contains only letters is an isogram. Assume the empty string is an isogram. Ignore letter case.

My Solution:  */

#include <string>
#include <unordered_set>

bool is_isogram(std::string str)
{
    std::unordered_set<char> uSet; // Create an unordered set to check for duplicates

    for (char c : str) // Iterate through the string to check all characters
    {
        char lower = tolower(c); // To ignore letter case, convert all chars to lowercase
        auto result = uSet.insert(lower); // When trying to insert, the function will return true (insertion successful) or false(duplicate found, insertion unsuccessful)
        if (!result.second) // If not true, duplicate found, not an isogram
            return false;
    }
    return true; // No duplicates found, is an isogram
}