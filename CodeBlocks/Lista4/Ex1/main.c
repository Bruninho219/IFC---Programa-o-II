#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	float num;

	printf("Informe um número:\n");
	scanf("%f", &num);

	if(num>0)
    {
        printf("O número informado é POSITIVO!");
    }
    else
    {
        if(num<0)
        {
            printf("O númeor informado é NEGATIVO!");
        }
        else
        {
            printf("O número informado é ZERO");
        }
    }
    printf("\n\n");
	system("pause");
}
