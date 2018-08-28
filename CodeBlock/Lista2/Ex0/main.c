#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
    setlocale(LC_ALL, "Portuguese");
    int num, som=0;

    printf("Informe três valores inteiros:\n");
    printf("1: ");
    scanf("%d", &num);
    som=num;

    printf("2: ");
    scanf("%d", &num);
    som=num+som;

    printf("3: ");
    scanf("%d", &num);
    som=num+som;

    printf("Soma: %d\n\n", som);
}
