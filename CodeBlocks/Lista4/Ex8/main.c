#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	float num1, num2;
	char opc;

	printf("Openações:\n");
	printf("+ :Adição     - :Subtração\n");
	printf("/ :Divisão    * :Multiplicação\n");
	scanf("%c", &opc);
	printf("Número 1: ");
	scanf("%f", &num1);
	printf("Número 2: ");
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
			printf("Operação incorreta!");
			break;
	}
	printf("\n\n");
	system("pause");
}
