#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
    int num;

    printf("Informe um n�mero inteiro:\n");
    scanf("%d", &num);

    if(num%2==0)
    {
        printf("O n�mero � POSITIVO!\n\n");
    }
    else
    {
        printf("O n�mero � NEGATIVO!\n\n");
    }
	system("pause");
}
