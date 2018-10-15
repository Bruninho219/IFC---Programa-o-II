#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	char tam;
	int qInv=0, qP=0, qM=0, qG=0;

	for(int i=0; i<500; i++)
	{
		fflush(stdin);
		printf("\nInforme o tamanho da camisa [%d]:\n", i+1);
		printf("P -Pequena M-Média G -Grande\n");
		printf("> ");
		scanf("%c", &tam);

		if(tam=='P' || tam=='p')
		{
			qP++;
		}
		else
		{
			if(tam=='M' || tam=='m')
			{
				qM++;
			}
			else
			{
				if(tam=='G' || tam=='g')
				{
					qG++;
				}
				else
				{
                    printf("Código inválido!\n");
                    qInv++;
				}
			}
		}
	}

	printf("Pequena: %d\n", qP);
	printf("Médio: %d\n", qM);
	printf("Grande: %d\n", qG);
	printf("Inválidos: %d\n", qInv);
	system("pause");
}
