#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	int quantVei;
	float consMed=0, medGer=0, maiorCons=0;

	printf("Informe a quantidade de veículos da frota:\n");
	scanf("%d", &quantVei);

	for(int i=0; i<quantVei; i++)
    {
        printf("Informe o consume médio de combustível do veículo %i:\n", i+1);
        scanf("%f", &consMed);

        medGer+=consMed;

        if(consMed>=maiorCons)
        {
            maiorCons=consMed;
        }
    }

    printf("\nConsumo médio geral: %.2f\n", medGer/quantVei);
    printf("Maior consumo: %.2f\n\n", maiorCons);

	system("pause");
}
