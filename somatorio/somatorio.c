#include "somatorio.h"
#include <stdio.h>
#include <math.h>

long double somatorio1(long double m, long double n)
{
    if (m == n)
    {
        return m;
    }
    return m + somatorio1(m + 1, n);
}

long double somatorio2(long double m, long double n)
{
    printf("Do nothing");
    return 1;
}