/* Description : We need a function that can transform a number(integer)
into a string.
My Solution: */

#include <string>

std::string number_to_string(int num)
{

    std::string str = std::to_string(num);
    return str;
}