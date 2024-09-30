/*Description:
Given the triangle of consecutive odd numbers
Calculate the sum of the numbers in the nth row of this triangle (starting at index 1)

My Solution: */

#include <cmath>
long long rowSumOddNumbers(unsigned n)
{
    return std::pow(n, 3);
}