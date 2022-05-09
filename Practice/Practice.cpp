#include <iostream>
#include "AreaOfTriangle.h"
#include "IsNumberPrime.h"

int main()
{
    AreaOfTriangle aot;
    std::cout << "Area of Triangle: " << aot.GetAreaOfTriangle(3, 5) << std::endl;

    IsNumberPrime primeOrNot;
    std::cout << primeOrNot.isPrime(9) << std::endl;
}
