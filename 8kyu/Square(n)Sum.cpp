// DESCRIPTION:
// Complete the square sum function so that it squares each number passed
// into it and then sums the results together.

// My solution
#include <vector>

int square_sum(const std::vector<int>& numbers)
{
  if(numbers.size() == 0) // test if the vector is empty
    return 0;
  
  else{ // if vector is not empty then start to sum squares
    int sum = 0; // initalize sum var to hold sum
    for(auto i=numbers.begin(); i!=numbers.end(); i++){ // iterate through the vector
      sum += (*i) * (*i); // accumulate all values to the sum var
    }
    return sum; // return the sum
  }
}

int main(){
  return 0;
}