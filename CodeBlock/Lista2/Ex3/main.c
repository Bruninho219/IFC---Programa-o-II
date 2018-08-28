#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
    setlocale(LC_ALL, "Portuguese");
    float num, med=0;

    printf("Informe quatro valores:\n");
    printf("1: ");
    scanf("%f", &num);
    med=num;

    printf("2: ");
    scanf("%f", &num);
    med=num+med;

    printf("3: ");
    scanf("%f", &num);
    med=num+med;

    printf("4: ");
    scanf("%f", &num);
    med=num+med;

    printf("Média aritimética: %.3f\n\n", med/4);
}
