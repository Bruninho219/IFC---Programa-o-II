#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	int i=0;
	float sal, maiorSal, menorSal, salTt=0;

	do
    {
        printf("Informe o salário [%i]:", i+1);
        scanf("%f", &sal);

        salTt+=sal;

        if(i==0)
        {
            maiorSal=sal;
            menorSal=sal;
        }

        if(sal>maiorSal)
        {
            maiorSal=sal;
        }

        if(sal<menorSal && sal!=0)
        {
            menorSal=sal;
        }

        i++;
    }
    while(sal!=0);


    printf("\nMédia salarial: R$%.2f\n", salTt/i);
    printf("Maior salário: R$%.2f\n", maiorSal);
    printf("Menor salário: R$%.2f\n\n", menorSal);
	system("pause");
}
