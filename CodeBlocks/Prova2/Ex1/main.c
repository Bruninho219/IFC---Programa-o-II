#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	int quantVei;
	float consMed=0, medGer=0, maiorCons=0;

	printf("Informe a quantidade de ve�culos da frota:\n");
	scanf("%d", &quantVei);

	for(int i=0; i<quantVei; i++)
    {
        printf("Informe o consume m�dio de combust�vel do ve�culo %i:\n", i+1);
        scanf("%f", &consMed);

        medGer+=consMed;

        if(consMed>=maiorCons)
        {
            maiorCons=consMed;
        }
    }

    printf("\nConsumo m�dio geral: %.2f\n", medGer/quantVei);
    printf("Maior consumo: %.2f\n\n", maiorCons);

	system("pause");
}
