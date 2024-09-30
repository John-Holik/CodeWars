/*Description:
Given two integers a and b, which can be positive or negative, find the sum of all the integers between 
and including them and return it. If the two numbers are equal return a or b.

My Solution:  */

int get_sum(int a, int b)
{
    int sum = 0;

    if (a == b) // Check if Values are the same
        return a;

    if (a < b) // Check if b is greater than a
    {
        while (a <= b) //If so, sum a until it is greater than b
        {
            sum += a;
            a += 1;
        }
    }
    else
    {
        while (b <= a) // else, do vice versa
        {
            sum += b;
            b += 1;
        }
    }
    return sum;
}