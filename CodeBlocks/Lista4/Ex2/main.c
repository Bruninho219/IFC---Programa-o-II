#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
    float num1, num2;

    printf("Informe a nota 1:\n");
    scanf("%f", &num1);
    printf("Informe a nota 2:\n");
    scanf("%f", &num2);
    if((num1+num2)/2>=6)
    {
        printf("\nO aluno est� APROVADO!\n");
    }
    else
    {
        printf("\nO aluno est� REPROVADO!\n");
    }
    printf("M�dia: %.2f\n\n", (num1+num2)/2);
	system("pause");
}
