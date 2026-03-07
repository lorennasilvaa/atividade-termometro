#include <stdio.h>
#include "math_utils.h"

int main(void)
{
    int resposta;

    printf("Conversor de medidas");
    printf("\n");

    do 
    {
        printf("Menu: \n1 - Celsius para Fahrenheit \n2 - Fahrenheit para Celsius \n0 - Sair\n>>>: ");
        scanf("%d", &resposta);

        if (resposta == 0)
        {
            printf("Encerrando programa...\n");
            break;
        }
        
        if (resposta < 0 || resposta > 2)
        {
            printf("Opção inválida.\n");
            continue;
        }

        float temperatura = 0;
        printf("Digite a temperatura que deseja converter: ");
        scanf("%d", &temperatura);

        if (resposta == 1)
        {
            float resultado = celsius_to_fahrenheit(temperatura);
            printf("%.2f grau(s) Celsius = %.2f grau(s) Fahrenheit\n\n", temperatura, resultado);
        } 
        else
        {
            float resultado = fahrenheit_to_celsius(temperatura);
            printf("%.2f grau(s) Fahrenheit = %.2f grau(s) Celsius\n\n", temperatura, resultado);
        }
    } while (1);

    return 0;
}
