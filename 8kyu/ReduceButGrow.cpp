/*Description:
Given a non-empty array of integers, return the result of multiplying the values together in order.

My Solution:  */

#include <vector>
int grow(std::vector<int> nums)
{
    int growth = 1; // Start with the value of 1 so multiplication is accurate

    for (const auto &num : nums) // Iterrate through the nums vector
    {
        growth *= num; 
    }
    return growth;
}