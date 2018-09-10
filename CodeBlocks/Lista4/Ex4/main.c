#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
    int num;

    printf("Informe um número inteiro:\n");
    scanf("%d", &num);

    if(num%2==0)
    {
        printf("O número é POSITIVO!\n\n");
    }
    else
    {
        printf("O número é NEGATIVO!\n\n");
    }
	system("pause");
}
