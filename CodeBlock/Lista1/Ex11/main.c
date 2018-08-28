#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	char c1, c2, c3;

	printf("Informe três caracteres:\n");
	scanf("%c %c %c", &c1 ,&c2, &c3);

	printf("Caracteres informados: \n%c \n%c \n%c \n", c1, c2, c3);
}
