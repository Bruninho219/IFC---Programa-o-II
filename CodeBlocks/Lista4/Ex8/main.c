#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	float num1, num2;
	char opc;

	printf("Opena��es:\n");
	printf("+ :Adi��o     - :Subtra��o\n");
	printf("/ :Divis�o    * :Multiplica��o\n");
	scanf("%c", &opc);
	printf("N�mero 1: ");
	scanf("%f", &num1);
	printf("N�mero 2: ");
	scanf("%f", &num2);
	printf("\n");

	switch(opc)
	{
		case '+':
			printf("%.2f + %.2f= %.2f", num1, num2, num1+num2);
			break;
		case '-':
			printf("%.2f - %.2f= %.2f", num1, num2, num1-num2);
			break;
		case '*':
			printf("%.2f * %.2f= %.2f", num1, num2, num1*num2);
			break;
		case '/':
			if(num1!=0 && num2==0)
			{
				printf("%.2f + %.2f= ERRO!", num1, num2);
			}
			else
			{
				printf("%.2f / %.2f= %.2f", num1, num2, num1/num2);
			}
			break;
		default:
			printf("Opera��o incorreta!");
			break;
	}
	printf("\n\n");
	system("pause");
}
