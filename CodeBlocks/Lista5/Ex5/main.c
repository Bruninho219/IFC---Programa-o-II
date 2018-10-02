#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
    int n;

    printf("Informe um valor de 1 até 10:\n");
    scanf("%d", &n);

	for(int i=0; i<=10; i++)
    {
        printf("%i x %i = %i\n", n, i, n*i);
    }
    printf("\n\n");
	system("pause");
}
