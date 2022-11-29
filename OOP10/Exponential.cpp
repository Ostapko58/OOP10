#include "Exponential.h"

int Exponential::calculateElement(int n)
{
    return a1 * pow(d, (n - 1));
}

int Exponential::sum(int n)
{
    return a1 * (pow(d, n) - 1) / (d - 1);
}
