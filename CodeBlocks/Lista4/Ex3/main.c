#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
    float num1, num2, med;

    printf("Informe a nota 1:\n");
    scanf("%f", &num1);
    printf("Informe a nota 2:\n");
    scanf("%f", &num2);
    med=(num1+num2)/2;

    if(med>=7)
    {
        printf("\nO aluno est� APROVADO!\n");
    }
    else
    {
        if(med<5)
        {
            printf("\nO aluno est� REPROVADO!\n");
        }
        else
        {
            printf("\nO aluno est� RECUPERA��O!\n");
        }

    }
    printf("M�dia: %.2f\n\n", (num1+num2)/2);
	system("pause");
}
