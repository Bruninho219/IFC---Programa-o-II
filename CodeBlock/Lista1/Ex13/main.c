#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	float valorPC, valorTab;

	printf("Informe o valor do PC: ");
	scanf("%f", &valorPC);
	printf("Informe o valor do tablet: ");
	scanf("%f", &valorTab);

	printf("\nPC: R$%5.2f\n", valorPC);
	printf("Tablet: R$%5.2f\n", valorTab);
}
