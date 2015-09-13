#include <iostream>
#include <list>
typedef unsigned int uInt;

int main()
{
    bool is_prime;
    
    uInt count = 1;
    uInt my_prime = 2; //set to first prime
    std::list<uInt> primes;
    
    // the Sieve of Eratosthenes is a fast algorithim that runs in O(n log log n)
    
    for(uInt i = 3; count < 100; i += 2) { //skip ALL even numbers
        
        is_prime = true;
        
        for(uInt j = 3; j * j <= i && is_prime; j += 2) //again, skipping all even numbers
            if(i % j == 0) is_prime = false;
        
        if(is_prime) {
            ++count;
            my_prime = i;
            if (my_prime < 100) {
                std::cout << my_prime << "\n";
            }
            // keep a list of all the primes (why do all that work for nothing?)
            primes.push_back(my_prime);
        }
    }
    std::cin.get();
}