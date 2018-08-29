#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

main()
{
    setlocale(LC_ALL, "Portuguese");
    float val, valDollar;

    printf("Informe o valor do dólar:\n");
    scanf("%f", &valDollar);
    printf("Informo o valor em reais:\n");
    scanf("%f", &val);

    printf("Valor em dólar:\nUS$%.2f\n\n", val/valDollar);
}
