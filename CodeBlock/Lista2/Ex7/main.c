#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

main()
{
    setlocale(LC_ALL, "Portuguese");
    float val, valDollar;

    printf("Informe o valor do d�lar:\n");
    scanf("%f", &valDollar);
    printf("Informo o valor em reais:\n");
    scanf("%f", &val);

    printf("Valor em d�lar:\nUS$%.2f\n\n", val/valDollar);
}
