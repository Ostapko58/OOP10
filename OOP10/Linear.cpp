#include "Linear.h"

int Linear::calculateElement(int n)
{
    return a1 + d * (n - 1);
    
}

int Linear::sum(int n)
{
    return (2 * a1 + (n - 1) * d) / 2 * n;
    
}
