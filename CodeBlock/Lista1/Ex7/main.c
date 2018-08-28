#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	char car;

	printf("Informe um caracter:\n");
	scanf("%c", &car);

	printf("Caracter informado: %d\n", car);
}
