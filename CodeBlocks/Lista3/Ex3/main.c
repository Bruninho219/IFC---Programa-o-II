#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
    setlocale(LC_ALL, "Portuguese");
    char nome[50];
    float horT, IR, INSS;
    int numD;
	
    printf("Informe o nome do funcionário:\n");
    scanf("%[^\n]s", nome);
    printf("Informe o número de dependentes:\n");
    scanf("%d", &numD);
    printf("Informe o número de horas trabalhadas:\n");
    scanf("%f", &horT);
	
    IR = (horT*12 + numD*40)*0.05;
    INSS = (horT*12 + numD*40)*0.085;
	
    printf("\nNome do funcionário: %s\n", nome);
    printf("Salário bruto: R$%.2f\n", horT*12 + numD*40);
    printf("Impostos: RS%.2f\n", IR + INSS);
    printf(" IR: R$%.2f\n", IR);
    printf(" INSS: R$%.2f\n", INSS);
    printf("Salário líquido: %.2f\n\n", horT*12+numD*40-IR-INSS);
}
