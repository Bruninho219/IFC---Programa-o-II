#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
    char sexo;
    int masc=0, fem=0, inv=0, i=0;

    printf("Informe:\n");
    printf("M -Masculino\nF -Feminino\n");
    printf("X -Sair\n\n");
	do
    {
        printf("Informemo sexo do aluno(a) %i:\n", i+1);
        scanf("%c", &sexo);
        fflush(stdin);

        switch(sexo)
        {
            case 'F':
            case 'f':
                fem++;
                i++;
                break;
            case 'M':
            case 'm':
                masc++;
                i++;
                break;
            case 'X':
            case 'x':
                break;
            default:
                inv++;
        }
    }
    while(sexo!='x' && sexo!='X');

    printf("Aluno: %i\n", masc);
    printf("Aluna: %i\n\n", fem);
    printf("Inválidos: %i\n\n", inv);

	system("pause");
}
/*
Além disso, deve informar também o número de digitações inválidas.
O algoritmo encerra quando encontrar a letra X.
*/
