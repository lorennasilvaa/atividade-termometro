#include <stdio.h>

int main()
{
    int num = 0;
    printf("Digite um número: \n");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        printf("%d ", i);
    }
    return 0;
}