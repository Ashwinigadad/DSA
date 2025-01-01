#include<stdio.h>
long long int reverse(long long int x) {
    long long int rem;
    long long int rev = 0;

    #define long long int INT_MAX = 2147483647
    #define long long int INT_MIN = -2147483648

    while (x != 0) {
        rem = x % 10;
        x = x / 10;

        if (rev > (INT_MAX / 10) || (rev == (INT_MAX / 10) && rem > 7)) {
            return 0; 
        }
        if (rev < (INT_MIN / 10) || (rev == (INT_MIN / 10) && rem < -8)) {
            return 0; 
        }

        rev = rev * 10 + rem;
    }

    return rev;
}

