#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	float sal, porc, salNovo, valOper;
	char opc;

	printf("Informe o salário do funcionário:\n");
	scanf("%f", &sal);
	printf("Informe o porcentual para a alteração:\n");
	scanf("%f", &porc);
	fflush(stdin);
	printf("Informe a oprração:\n");
	printf("A- Acréscimo  D -Desconto\n");
	scanf("%c", &opc);

	if(opc!='a' && opc!='A' && opc!='d' && opc!='D')
    {
        printf("Código incorreto!\n\n");
    }
    else
    {
        if(opc=='a' || opc=='A')
        {
            salNovo=sal*(1+porc/100);
        }
        else
        {
            salNovo=sal*(1-porc/100);
        }
        printf("Valor anterior: %.2f\n", sal);
        valOper=sal*(porc/100);
        printf("Valor adicionado: R$%.2f\n", valOper);
        printf("Nova salário: R$%.2f\n\n", salNovo);
    }

	system("pause");
}
