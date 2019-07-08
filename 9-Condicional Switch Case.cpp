#include <stdio.h>							//Biblioteca
#include <stdlib.h>							//Biblioteca
#include <stdbool.h>						//Biblioteca

//Linzer.dev.art

int main()									//Função principal do programa
{
	//Declarando variáveis
	int a = 2;
	char b = 'x';
	
	//Utilizando IF
	if(a == 1)
	{
		printf("\nOpcao 1.");
	}
	else if(a == 2)
	{
		printf("\nOpcao 2.");
	}
	else if(a == 3)
	{
		printf("\nOpcao 3.");
	}
	else
	{
		printf("\nOpcao Invalida.");
	}
	
	//Utilizando Switch Case
	switch(a)
	{
		case 1:
			printf("\nOpcao 1.");
			break;
		case 2:
			printf("\nOpcao 2.");
			break;
		case 3:
			printf("\nOpcao 3.");
			break;
		default:
			printf("\nOpcao Invalida.");
			break;
	}
	
	//Utilizando Switch Case com char
	switch(b)
	{
		case 'x':
			printf("\nA letra eh x.");
		default:
			printf("\nOpcao Invalida.");
			break;
	}
	return 0;								//Retorna o valor 0
}    
