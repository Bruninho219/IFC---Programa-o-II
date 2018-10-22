/*
Faça um algoritmo que leia o nome de dois time, após isso, faça a leitura dos 5 ultimos jogos.
Ao final, exiba o nome de ambos os times, assim como a quantidade de vitórias e derrotas de cada um.
*/

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
    char time1[20], time2[20];
    int gol1[10], gol2[10], v=0, e=0, d=0;

    printf("Informe o nome do time 1:\n");
    scanf("%[^\n]s", time1);

    fflush(stdin);

    printf("Informe o nome do time 2:\n");
    scanf("%[^\n]s", time2);

    for(int i=0; i<5; i++)
    {
        printf("\nJogo %i\n", i+1);
        printf("Gols do %s:\n", time1);
        scanf("%i", &gol1[i]);

        printf("Gols do %s:\n", time2);
        scanf("%i", &gol2[i]);

        if(gol1[i]>gol2[i])
        {
            v++;
        }
        else
        {
            if(gol1[i]<gol2[i])
            {
                d++;
            }
            else
            {
                e++;
            }
        }
    }

    printf("\nTime: %s\n", time1);
    printf(" Vit: %i\n", v);
    printf(" Der: %i\n", d);
    printf(" Emp: %i\n\n", e);

    printf("\nTime: %s\n", time2);
    printf(" Vit: %i\n", d);
    printf(" Der: %i\n", v);
    printf(" Emp: %i\n\n", e);

	system("pause");
}
