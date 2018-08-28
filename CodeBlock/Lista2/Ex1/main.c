#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
    setlocale(LC_ALL, "Portuguese");
    int num;

    printf("Informe um número inteiro:\n");
    scanf("%d", &num);

    printf("Número antecessor: %d\n", num - 1);
    printf("Número sucessor: %d\n\n", num + 1);
}
