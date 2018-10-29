#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	int dia, mes, ano, diasVividos;

	printf("Informe o dia de nascimento:\n");
	scanf("%d", &dia);
	printf("Informe o mês de nascimento:\n");
	scanf("%d", &mes);
	printf("Informe o ano de nascimento:\n");
	scanf("%d", &ano);

	diasVividos= 30-dia;
	diasVividos+=(12-mes)*30;
	diasVividos+=(2018-ano)*365;

	printf("Dias vividos: %d dias\n\n", diasVividos);
	system("pause");
}
