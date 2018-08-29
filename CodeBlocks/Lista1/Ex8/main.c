#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	int n1, n2;

	printf("Informe dois números inteiros:\n");
	printf("Número 1:\n");
	scanf("%d", &n1);
	printf("Número 2:\n");
	scanf("%d", &n2);

	printf("Números informados:\n%d, %d\n", n2, n1);
}
