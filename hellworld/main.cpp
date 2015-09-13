#include <iostream>
#include <list>
typedef unsigned int uInt;

int main()
{
    bool is_prime;
    
    uInt count = 1;
    uInt my_prime = 2; //set to first prime
    std::list<uInt> primes;
    
    // would set this to 100 but using the Sieve of Eratosthenes and due to this the when it is set to 100 it finds the primes up to 500, since the sieve uses multiplication, this is the fastest algorithim i could find and runs in O(n log log n)
    
    for(uInt i = 3; count < 100000000; i += 2) { //skip ALL even numbers, find the first 100 million primes
        
        is_prime = true;
        
        for(uInt j = 3; j * j <= i && is_prime; j += 2) //again, skipping all even numbers
            if(i % j == 0) is_prime = false;
        
        if(is_prime) {
            ++count;
            my_prime = i;
            if (my_prime < 100) {
                std::cout << my_prime << "\n";
            }
            // keep a list of all the primes
            primes.push_back(my_prime);
        }
    }
    std::cin.get();
}