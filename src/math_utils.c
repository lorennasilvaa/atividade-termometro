#include "math_utils.h"

int fatorial(int n)
{
    // codição de parada
    if (n == 0)
    {
        return 1;
    }
    
    return n * fatorial(n -1);
}