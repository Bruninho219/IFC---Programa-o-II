#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	int sala, capac, alunos;

	printf("Informe o n�mero da sala:\n");
	scanf("%d", &sala);
	printf("Informe a capacidade de alunos da sala %d\n", sala);
	scanf("%d", &capac);
	printf("Informe o n�umero de alunos matriculados na sala %d:\n", sala);
	scanf("%d", &alunos);

	printf("\nN�mero da sala: %d\nCapacidade: %d\nCadeiras ocupadas: %d\nDisponibilidade: %d\n", sala, capac, alunos, (capac-alunos));

	if((capac-alunos)==0)
    {
        printf("  Sala lotada!\n\n");
    }
    else
    {
        printf("  H� vagas!\n\n");
    }


	system("pause");
}
