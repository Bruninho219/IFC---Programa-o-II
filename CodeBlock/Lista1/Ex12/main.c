#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	char c;
	int i;
	float f;

	printf("Informe um caracter: ");
	scanf("%c", &c);
	printf("Informe um valor inteiro: ");
	scanf("%d", &i);
	printf("Informe um valor num�rico: ");
	scanf("%f", &f);

	printf("\nSeparado por espa�o:\n");
	printf("%c %d %f\n", c, i, f);
	printf("\nTabula��o horizontal:\n");
	printf("\t%c\t%d\t%f\n", c, i, f);
	printf("\nSeparado por linha:\n");
	printf("%c\n%d\n%f\n", c, i, f);
}//***
