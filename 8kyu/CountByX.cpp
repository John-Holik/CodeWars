// DESCRIPTION: Create a function with two arguments that will return an array of the first n multiples of x.
//      Assume both the given number and the number of times to count will be positive numbers greater than 0.
//      Return the results as an array or list(depending on language).

//My Solution:

#include <vector>
std::vector<int> countBy(int x, int n)
{
    int temp = 0; // accumulator for values to be added to count
    int i = 0; // used to iterator the number of loops
    std::vector<int> count; // new vector to hold values and return

    while (i < n)
    {
        temp += x; // increment temp var 
        count.push_back(temp); // add temp var to vector 
        i++; // iterate to the next step
    }

    return count;
}