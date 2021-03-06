/**
(c) Sergio Morales 2013
 CodeEval Challenge: Sum of Primes
 Date Solved: 12/04/13
**/


#include <iostream>
using namespace std;


/**
  function:    is_prime
  description: Determines if the input is prime or not.
  return:      True if the input is prime
               False otherwise
**/
bool is_prime(int num);

int main() {
    // Declare variables
    int sum = 0;             // Summation for primes
    int num = 0;             // Number of primes currently found
    int numprimes = 1000;    // Number of primes to be summed
    int i = 2;               // Count & iterator
    
    while(num < numprimes) {
        // If the number is prime, add up to sum and iterate.
        if( is_prime(i) ) {
            sum += i;
            ++num;
        }
        
        ++i;
    }

    // Final summation of primes
    cout << endl << sum << endl;

    return 0;
}

bool is_prime(int num) {
    for(int i = 2; i < num ; ++i) {
        if(num % i == 0)
            return false;
    }
    
    return true;
}
