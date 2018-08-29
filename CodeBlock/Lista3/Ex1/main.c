#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
    setlocale(LC_ALL, "Portuguese");
    float sal, perc;

    printf("Informe o salário (R$):\n");
    scanf("%f", &sal);
    printf("Informe o percentual de aumento (Ex.: 10):\n");
    scanf("%f", &perc);

    perc=perc/100+1;
    sal = sal * perc;

    printf("Novo salário: R$%.2f\n\n", sal);
}
