#include <iostream>
#include <list>
typedef unsigned int uInt;

int main()
{
    bool is_prime;
    uInt count = 1;
    uInt my_prime = 2;
    uInt n = 100;

    for (uInt i = 3; count < n; i += 2) { // skip all even numbers
        is_prime = true;
        for (uInt j = 3; j * j <= i && is_prime; j += 2) //again, skipping all even numbers
            if(i % j == 0) is_prime = false;
        
        if(my_prime) {
            ++count;
            my_prime = i;
            //if (my_prime < 100) {
                std::cout << my_prime << "\n";
            //}
        }
    }
    std::cin.get();
}