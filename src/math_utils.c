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

float celsius_to_fahrenheit(float n)
{
    float resp = 0.0;
    resp = n * 1.8 + 32; 
    return resp; 
}

float fahrenheit_to_celsius(float n)
{
    float resp = 0.0;
    resp = n / 1.8 - 32;
    return resp;
}