#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");

    float num, numTt=0;

    printf("Informe um n�mero:\n");
    printf("Informe 0 para sair:\n");

	while(num!=0)
    {
        printf("Valor: ");
        scanf("%f", &num);

		numTt=num+numTt;
    }


    printf("\Soma dos n�meros: %.2f\n\n", numTt);
	system("pause");
}
