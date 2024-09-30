/* Description:
Your task is to make a function that can take any non-negative integer as an argument and return it with its digits in descending order. 
Essentially, rearrange the digits to create the highest possible number.

My Solution:  */

#include <cinttypes>
#include <vector>
#include <algorithm>

uint64_t descendingOrder(uint64_t a)
{
    std::vector<int> nums; // Create a vector to hold all digits seperately 

    while (a > 0)
    {
        nums.push_back(a % 10); // Get the last Digit of the number and add it to the nums array
        a /= 10;
    }

    std::sort(nums.begin(), nums.end(), std::greater<int>()); // Use the algorithms class to sort the vector greatest to least 
    
    uint64_t dOrder = 0; // int to hold the sorted numbers

    for (uint64_t num : nums)
    {
        dOrder = dOrder * 10 + num; // Formula to add the numbers in the correct order
    }
    return dOrder;
}