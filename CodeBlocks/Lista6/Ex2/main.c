#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

main()
{
    setlocale(LC_ALL, "Portuguese");
    float num;
    int n12=0, n56=0, n=0;

    for(int i=0; i<100; i++)
    {
    	printf("Informe um n�mero - %i:\n", i+1);
    	scanf("%f", &num);

    	if(num>=10 && num<=20)
        {
            n12++;
        }
        else
        {
            if(num>=50 && num<=60)
            {
                n56++;
            }
            else
            {
                n++;
            }
        }
	}

	printf("\nN�meros entre 10 e 20: %i\n", n12);
	printf("N�meros entre 50 e 60: %i\n", n56);
	printf("N�meros fora dessas faixas: %i\n\n", n);
	system("pause");
}
