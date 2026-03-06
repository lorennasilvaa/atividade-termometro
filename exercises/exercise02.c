#include <stdio.h>
#include "math_utils.h"

int main(void)
{
    int num = 0;
    printf("Digite um número: ");
    scanf("%d", &num);

    printf("O fatorial de %d é: %d\n", num, fatorial(num));
    return 0;
}
