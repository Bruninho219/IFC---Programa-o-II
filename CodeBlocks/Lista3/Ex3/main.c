#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
    setlocale(LC_ALL, "Portuguese");
    char nome[50];
    float horT, IR, INSS;
    int numD;
	
    printf("Informe o nome do funcion�rio:\n");
    scanf("%[^\n]s", nome);
    printf("Informe o n�mero de dependentes:\n");
    scanf("%d", &numD);
    printf("Informe o n�mero de horas trabalhadas:\n");
    scanf("%f", &horT);
	
    IR = (horT*12 + numD*40)*0.05;
    INSS = (horT*12 + numD*40)*0.085;
	
    printf("\nNome do funcion�rio: %s\n", nome);
    printf("Sal�rio bruto: R$%.2f\n", horT*12 + numD*40);
    printf("Impostos: RS%.2f\n", IR + INSS);
    printf(" IR: R$%.2f\n", IR);
    printf(" INSS: R$%.2f\n", INSS);
    printf("Sal�rio l�quido: %.2f\n\n", horT*12+numD*40-IR-INSS);
}
