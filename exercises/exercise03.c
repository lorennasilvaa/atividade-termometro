#include <stdio.h>

int main(void)
{
    int const TAMANHO = 5;
    int numeros[TAMANHO];

    for (int i = 0; i < TAMANHO; i++)
    {
        printf("Digite um número: ");
        scanf("%d", &numeros[i]);
    }

    int soma = 0;

    for (int i = 0; i < TAMANHO; i++)
    {
        soma += numeros[i];
    }

    printf("A soma dos números é: %d\n", soma);
    return 0;
}
