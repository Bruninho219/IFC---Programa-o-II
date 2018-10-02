#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
    int i=0;
    float num, numTt=0;

    printf("Informe um número:\n");
    printf("Informe 0 para sair:\n");

	do
    {
        printf("Valor %i: ", i+1);
        scanf("%f", &num);

        if(num>0)
        {
            numTt=num+numTt;
            i++;
        }
    }
    while(num!=0);

    printf("\nMédia da soma dos números: %.2f\n\n", numTt/i);
	system("pause");
}
