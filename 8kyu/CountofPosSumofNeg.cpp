//  DESCRIPTION:
// Given an array of integers.

// Return an array, where the first element is the count of positives numbers and the second element is sum of negative numbers. 0 is neither positive nor negative.

// If the input is an empty array or is null, return an empty array.

//My Solution:
#include <vector>

std::vector<int> countPositivesSumNegatives(std::vector<int> input)
{
    int pos = 0; // initialize counter for positive int's
    int neg = 0; // initialize accumulator for negative values

    if (input.size() == 0)
    { // check if the vector is empty
        std::vector<int> result(0, 0);
        return result;
    }
    else
    { // if the vector is not empty
        for (auto i = input.begin(); i != input.end(); i++)
        { // iterate through vector
            if (*i > 0)
            {             // if value is greater than 0 then it is positive
                pos += 1; // increment positive var by 1
            }
            if (*i < 0)
            {              // if value is less than 0 then it is negative
                neg += *i; // accumulate negative values
            }
        }
        std::vector<int> result({pos, neg}); // create vector to return the number of positive vals and sum of negative vals
        return result;
    }
}