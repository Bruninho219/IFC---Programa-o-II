#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
    float nota, somaNota;
    char opc;

    do
    {
        fflush(stdin);
        somaNota=0;

        for(int i=0; i<4; i++)
        {
            printf("Informe a nota %i: ", i+1);
            scanf("%f", &nota);
            somaNota+=nota;
        }

        printf("Média estudantil: %.2f\n", somaNota/4);

        if((somaNota/4)>=7)
        {
            printf("Aprovado\n\n");
        }
        else
        {
            printf("Reprovado\n\n");
        }

        printf("Deseja realizar a média de outro aluno?\n");
        printf("S -Sim   N -Não\n");
        printf("> ");
        scanf("%c", &opc);
    }
    while(opc!='n' || opc!='N');

	system("pause");
}
