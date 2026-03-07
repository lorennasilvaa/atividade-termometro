#include <stdio.h>
#include "math_utils.h"

int main(void)
{
    int num = 0;

    printf("Digite um número: ");
    scanf("%d", &num);

    int resultado = eh_primo(num); 

    if (resultado == 1)
    {
        printf("O número %d é primo.\n", num);
    }
    else
    {
        printf("O número %d não é primo.\n", num);
    }

    return 0;
}
