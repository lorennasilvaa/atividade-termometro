#include <stdio.h>
#include <string.h>

int main()
{
    char texto[100];

    printf("Digite qualquer coisa: ");
    fgets(texto, sizeof(texto), stdin);
    texto[strcspn(texto, "\n")] = '\0';
    int tamanho = strlen(texto);

    printf("A string digitada tem %d caracteres.\n", tamanho);

    return 0;
}
