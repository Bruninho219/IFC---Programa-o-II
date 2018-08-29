#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	int dia, mes, ano;

	printf("Informe uma data (dd/mm/aaaa):\n");
	scanf("%d/%d/%d", &dia ,&mes, &ano);

	printf("Data informada:\n%d/%d/%d\n", dia, mes, ano);
}
