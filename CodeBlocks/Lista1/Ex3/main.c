#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	int num;

	printf("Informe um n�mero inteiro:\n");
	scanf("%d", &num);

	printf("Valor lido: %d\n", num);
}
