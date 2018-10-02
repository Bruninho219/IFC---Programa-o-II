#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
    int num, numTt=0, i=0;

    printf("Informe um número positivos:\n");
    printf("Informe um número negativo para sair:\n");
	do
    {
        printf("Valor %i: ", i+1);
        scanf("%d", &num);

        if(num>0)
        {
            numTt=num+numTt;
            i++;
        }
    }
    while(num>=0);

    printf("\nSoma dos números: %i\n\n", numTt/i);
	system("pause");
}
