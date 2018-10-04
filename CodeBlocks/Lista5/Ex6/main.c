#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
    float sal=0, salTt=0;

	printf("Informe o valor do salário dos funcionários:\n");
	for(int i=1; i<=30; i++)
    {
        printf("Funcionário %i:\n", i);
        scanf("%f", &sal);

        salTt=sal+salTt;
    }
    printf("Salário médio: R$%.2f\n\n", salTt/30);
	system("pause");
}
