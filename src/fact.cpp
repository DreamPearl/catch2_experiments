#include "fact.hpp"

unsigned int Factorial( unsigned int number ) {
    return number > 1 ? Factorial(number - 1) * number : 1; // Pass
    // return number <= 1 ? number : Factorial( number - 1 ) * number;   //
    // Fail; factorial of 0 is 1
}
