#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	double num;

	printf("Informe um n�mero:\n");
	scanf("%f", &num);

	printf("Valor lido: %e\n", num);
}
