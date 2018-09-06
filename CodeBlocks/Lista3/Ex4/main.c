#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	float val=3.45, kilIni, kilFin, combGast, ttGan;

	printf("Informe a Km inicial do veículo (Km):\n");
	scanf("%f", &kilIni);
	printf("Informe a Km final do veículo (Km):\n");
	scanf("%f", &kilFin);
	printf("Informe o volume de combustível gasto (l):\n");
	scanf("%f", &combGast);
	printf("Informe o valor ganho (R$):\n");
	scanf("%f", &ttGan);

	printf("\nMédia de consumo: %.2fKm/l\n", (kilFin-kilIni)/combGast);
	printf("Lucro líquido do dia: R$%.2f\n\n", ttGan-combGast*val);
	system("pause");
}
