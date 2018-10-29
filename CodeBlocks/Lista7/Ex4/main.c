#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	float sal, salN;

	for(int i=0; i<500; i++)
    {
        printf("Informe o salário:\n");
        scanf("%f", &sal);

        if(sal<0)
        {
            break;
        }
        else
        {
            if(sal<=300)
            {
                salN=sal*1.5;
            }
            else
            {
                salN=sal*1.3;
            }
        }

        printf("Novo salário: R$%.2f\n\n", salN);
    }

	system("pause");
}
