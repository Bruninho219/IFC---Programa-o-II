#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	const float pi = 3.14159265359;
	float vol, r;

	printf("Informe o raio (m):\n");
	scanf("%f", &r);

	vol=(4*pi*r*r*r)/3;
	printf("Volume: %.2fm³\n\n\n", vol);
	system("pause");
}
