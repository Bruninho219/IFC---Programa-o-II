#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
    setlocale(LC_ALL, "Portuguese");
    int numP;
    float numH, valH, porcD;

    printf("Informe o número de pessoas:\n");
    scanf("%d", &numP);
    printf("Informe o valor da hora (R$):\n");
    scanf("%f", &valH);
    printf("Informe o tempo de permanência (hs):\n");
    scanf("%f", &numH);
    printf("Informe o percentual de desconto (Ex.: 10):\n");
    scanf("%f", &porcD);

    printf("\nValor a pagar: R$%.2f\n", valH*numH*numP);
    printf("Valor a pagar com desconto: R$%.2f\n\n", (valH*numH*numP)*(1-porcD/100));
}
