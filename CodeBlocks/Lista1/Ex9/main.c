#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	float n1, n2;

	printf("Informe dois n�meros inteiros:\n");
	printf("N�mero 1:\n");
	scanf("%f %f", &n1 ,&n2);

	printf("N�meros informados:\n%.2f, %.2f", n2, n1);
}
