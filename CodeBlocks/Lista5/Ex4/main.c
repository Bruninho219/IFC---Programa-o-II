#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
    int n=0, valor;

	for(int i=1; i<=5; i++)
    {
        printf("Informe o valor %i:\n", i);
        scanf("%d", &valor);

        if(valor<0)
        {
            n++;
        }
    }

    printf("\nValores negativos: %i\n\n", n);
	system("pause");
}
