#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	float val=3.45, kilIni, kilFin, combGast, ttGan;

	printf("Informe a Km inicial do ve�culo (Km):\n");
	scanf("%f", &kilIni);
	printf("Informe a Km final do ve�culo (Km):\n");
	scanf("%f", &kilFin);
	printf("Informe o volume de combust�vel gasto (l):\n");
	scanf("%f", &combGast);
	printf("Informe o valor ganho (R$):\n");
	scanf("%f", &ttGan);

	printf("\nM�dia de consumo: %.2fKm/l\n", (kilFin-kilIni)/combGast);
	printf("Lucro l�quido do dia: R$%.2f\n\n", ttGan-combGast*val);
	system("pause");
}
