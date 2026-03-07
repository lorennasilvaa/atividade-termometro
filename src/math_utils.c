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
    resp = (n * 1.8) + 32; 
    return resp; 
}

float fahrenheit_to_celsius(float n)
{
    float resp = 0.0;
    resp = (n - 32) / 1.8;
    return resp;
}

int eh_primo(int n)
{
    if (n <= 1)
    {
        return 0;
    }

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    
    return 1;
}