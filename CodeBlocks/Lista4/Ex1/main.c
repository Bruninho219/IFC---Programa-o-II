#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	float num;

	printf("Informe um n�mero:\n");
	scanf("%f", &num);

	if(num>0)
    {
        printf("O n�mero informado � POSITIVO!");
    }
    else
    {
        if(num<0)
        {
            printf("O n�meor informado � NEGATIVO!");
        }
        else
        {
            printf("O n�mero informado � ZERO");
        }
    }
    printf("\n\n");
	system("pause");
}
