#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	int opc=0;
	float jan, fev;

	do
    {
        do
        {
            printf("Informe o consumo de energia do m�s de Janeiro:\n");
            scanf("%f", &jan);
            if(jan<0)
            {
                printf("Informe um valor positivo!\n\n");
            }
        }
        while(jan<0);

        do
        {
            printf("Informe o consumo de energia do m�s de Fevereiro:\n");
            scanf("%f", &fev);
            if(fev<0)
            {
                printf("Informe um valor positivo!\n\n");
            }
        }
        while(fev<0);

        printf("M�dia: %.2f\n\n", (jan+fev)/2);

        printf("Deseja realizar uma nova leitura?\n");
        printf("0 -N�o   1 -Sim\n");
        scanf("%d", &opc);
    }
    while(opc==1);

	system("pause");
}
