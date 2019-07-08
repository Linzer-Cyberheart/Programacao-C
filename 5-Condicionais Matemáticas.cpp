#include <stdio.h>		     						//Biblioteca
#include <stdlib.h>									//Biblioteca
#include <stdbool.h>								//Biblioteca

//Linzer.dev.art

int main()						   					//Função principal do programa
{
	int a = 5, b = 10, c = 15; 						//Definindo as variáveis
	char d = 'x';
	
	if(a>2)
	{
		printf("\n %d eh maior que 2", a);
	}
	
	if(c>=b)
	{
		printf("\n %d eh maior ou igual a %d", c, b);	
	}
	
	if(a<10)
	{
		printf("\n %d eh menor que 10", a);
	}		
	
	if(c != 10)
	{
		printf("\n %d nao é igual a 10", c);
	}
	
	if(d != 'a')
	{
		printf("\n %c nao eh 'a'", d);
	}
	
	system("pause");								//Pausa o programa após excecutar
		
	return 0;										//Retorna o valor 0
}	
