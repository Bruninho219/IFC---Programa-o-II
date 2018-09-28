#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	int qSalsH, qSalsF, qHamB, qEmp, qHamC, qCho;
    float valA, valB;

	printf("Informe a quantidade de Sansicha Hot:\n");
    scanf("%d", &qSalsH);
	printf("Informe a quantidade de Salsicha Frango:\n");
    scanf("%d", &qSalsF);
	printf("Informe a quantidade de Hambúrguer de Bacon:\n");
    scanf("%d", &qHamB);
	printf("Informe a quantidade de Empanado:\n");
    scanf("%d", &qEmp);
	printf("Informe a quantidade de Hambúrguer Calabresa:\n");
    scanf("%d", &qHamC);
    printf("Informe a quantidade de Choop:\n");
    scanf("%d", &qCho);

    valA=qSalsH*5+qSalsF*7+qHamB*9+qEmp*9+qHamC*9;
    //valB=qCho*10; //resposta correta segundo o professor
    valB=qCho*10/2; //minharesposta que eu acredito estar correta

    printf("\nO valor bruto consumido com alimentação: R$%.2f\n", valA);
    printf("O valor bruto consumido com bebidas: R$%.2f\n", valB);
    printf("O valor das bebidas já com o acréssimo (+5p): R$%.2f\n", valB*1.05);
    printf("O valor do desconto oferecido sobre a alimentação (-15p): R$%.2f\n\n", valA*0.15);
    printf("O valor final total a pagar pela conta:: R$%.2f\n\n\n", (valA*0.85+valB*1.05)*1.1);

	system("pause");
}
