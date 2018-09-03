#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	float cap, taxa, temp;

    printf("Informe a quantia pego (R$):\n");
    scanf("%f", &cap);
    printf("Informe a taxa de juros mensal:\n");
    scanf("%f", &taxa);
    printf("Informe o prazo para a devolução do dinheiro (mês):\n");
    scanf("%f", &temp);

	printf("Juros pagos: R$%.2f\n", cap*taxa/100*temp);
	printf("Pagamento total ao banco: R$%.2f\n\n", cap*taxa*temp/100+cap);
	system("pause");
}
