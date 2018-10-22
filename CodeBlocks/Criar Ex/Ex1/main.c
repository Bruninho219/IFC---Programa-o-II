/*
Escreva um algoritmo que tenha como a entrada de uma senha.
A senha correta é 12345. A cada vez que o usuário informar uma senha incorreta, deverá exibir a mensagem "Senha incorreta!", mas se o mesmo errar 3 vezes, o programa deverá exibir a mensagem "Acesso negado!" e deverá ser finalizado.
Caso o usuário acerte, deverá ser exibida a mensagem "Acesso permitido!".
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
