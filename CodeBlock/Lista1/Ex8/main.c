#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	int n1, n2;

	printf("Informe dois n�meros inteiros:\n");
	printf("N�mero 1:\n");
	scanf("%d", &n1);
	printf("N�mero 2:\n");
	scanf("%d", &n2);

	printf("N�meros informados:\n%d, %d\n", n2, n1);
}
