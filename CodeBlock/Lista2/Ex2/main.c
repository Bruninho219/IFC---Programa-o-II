#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
    setlocale(LC_ALL, "Portuguese");
    float num;

    printf("Informe um n�mero: ");
    scanf("%f", &num);

    printf("Quinta parte de %.3f= %.3f\n\n", num, num/5);
}
