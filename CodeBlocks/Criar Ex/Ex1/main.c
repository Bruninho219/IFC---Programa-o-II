/*
Escreva um algoritmo que tenha como a entrada de uma senha.
A senha correta � 12345. A cada vez que o usu�rio informar uma senha incorreta, dever� exibir a mensagem "Senha incorreta!", mas se o mesmo errar 3 vezes, o programa dever� exibir a mensagem "Acesso negado!" e dever� ser finalizado.
Caso o usu�rio acerte, dever� ser exibida a mensagem "Acesso permitido!".
*/

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	int cont=0, senha;
	int cond=0;

	while(cond==0)
    {
        printf("Informe a senha:\n");
        scanf("%i", &senha);

        if(senha!=12345)
        {
            printf("Senha incorreta!\n\n");

            cont++;

            if(cont==3)
            {
                printf("Acesso negado!\n\n");
                cond=1;
            }
        }
        else
        {
            printf("Acesso permitido!\n\n");
            cond=1;
        }
    }

	system("pause");
}
