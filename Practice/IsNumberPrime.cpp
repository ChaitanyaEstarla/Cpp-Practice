#include "IsNumberPrime.h"
#include <math.h>

bool IsNumberPrime::isPrime(int num)
{
    //if numbers are Mathematical Integers(signed int) then use the below 'if' else remove it
    if (num < 2)
        return false;

    for(int i = 2; i <= sqrt(num); i++)
    {
        if (num%i==0)
        {
            return false;
        }
    }
    return true;
}
