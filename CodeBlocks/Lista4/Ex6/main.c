#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	float vol;
	char cod;

	printf("Informe o código do cargo:\n");
	printf("A - Alcool\n");
	printf("G - Gasolina\n");
	scanf("%c", &cod);
	printf("Informe o volume vendido (l):\n");
	scanf("%f", &vol);

	if(cod=='A')
	{
		if(vol>20)
		{
			printf("Valor a pagar: R$%.2f", vol*1.9*0.95);
		}
		else
		{
			printf("Valor a pagar: R$%.2f", vol*1.9*0.97);
		}
	}
	else
	{
		if(cod=='G')
		{
			if(vol>20)
			{
				printf("Valor a pagar: R$%.2f", vol*1.9*0.94);
			}
			else
			{
				printf("Valor a pagar: R$%.2f", vol*1.9*0.96);
			}
		}
		else
		{
			printf("Código informado incorreto!");
		}
	}
	printf("\n\n");
	system("pause");
}
