#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
    setlocale(LC_ALL, "Portuguese");
    int numP;
    float numH, valH, valD;

    printf("Informe o n�mero de pessoas:\n");
    scanf("%d", &numP);
    printf("Informe o valor da hora (R$):\n");
    scanf("%f", &valH);
    printf("Informe o tempo de perman�ncia (hs):\n");
    scanf("%f", &numH);
    printf("Informe o valor do desconto (R$):\n");
    scanf("%f", &valD);

    printf("\nValor a pagar: R$%.2f\n", valH*numH*numP);
    printf("Valor a pagar comdesconto: R$%.2f\n\n", valH*numH*numP-valD);
}
