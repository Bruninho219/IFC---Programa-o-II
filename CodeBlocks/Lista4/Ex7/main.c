#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	int idade;

	printf("Informe a idade:\n");
	scanf("%d", &idade);

	if(idade<=5)
    {
        printf("Voc� ainda � muito pequeno\n");
    }
    else
    {
        if(idade<=10)
        {
            printf("Voc� est� crescendo\n");
        }
        else
        {
            if(idade<=15)
            {
                printf("Voc� j� � adolescente\n");
            }
            else
            {
                if(idade<=20)
                {
                    printf("E o futuro?\n");
                }
                else
                {
                    if(idade<=30)
                    {
                        printf("E o casamento?\n");
                    }
                    else
                    {
                        printf("E o geriatra?\n");
                    }
                }
            }
        }
    }
    printf("\n\n");
	system("pause");
}
