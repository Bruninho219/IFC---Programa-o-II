#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	int cod;
	float sal;

	printf("Informe o código do cargo:\n");
	printf("101 - Gerente\n");
	printf("102 - Engenheiro\n");
	printf("104 - Técnico\n");
	printf("100 - Outro\n");
	scanf("%d", &cod);
	printf("Salário:\n");
	scanf("%f", &sal);

	printf("\nSalário antigo: R$%.2f\n", sal);
	printf("Cargo: ");
	if(cod==101)
	{
		printf("Gerente\n");
		printf("Novo salário: R$%.2f", sal*1.1);
	}
	else
	{
		if(cod==102)
		{
			printf("Engenheiro\n");
			printf("Novo salário: R$%.2f", sal*1.2);
		}
		else
		{
			if(cod==103)
			{
				printf("Técnico\n");
				printf("Novo salário: R$%.2f", sal*1.3);
			}
			else
			{
				printf("Outro\n");
				printf("Novo salário:R$ %.2f", sal*1.4);
			}
		}
	}
	printf("\n\n");
	system("pause");
}
