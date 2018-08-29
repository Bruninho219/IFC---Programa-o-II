#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
    setlocale(LC_ALL, "Portuguese");
    char nome[50];
    float horT, sal, IR, INSS;
    int numD;

    printf("Informe o nome do funcionário:\n");
    scanf("%[^\n]s", nome);
    printf("Informe o número de horas trabalhadas:\n");
    scanf("%f", &horT);
    printf("Informe o número de dependentes:\n");
    scanf("%d", &numD);

    IR = (horT*10.0 + numD*40.0 + numD) * 0.05;
    INSS = (horT*10.0 + numD*40.0 + numD) * 0.085;

    printf("\nNome: %s\n", nome);
    printf("Salário bruto: R$%.2f\n", horT*10.0 + numD*40.0 + numD);
    printf("INSS: R$%.2f\n", INSS);
    printf("IR: R$%.2f\n", IR);
    printf("Salário Líquido: R$%.2f\n\n", horT*10.0 + numD*40.0 + numD - INSS - IR);
}
