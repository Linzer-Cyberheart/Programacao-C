#include <stdio.h>											//Biblioteca
#include <stdlib.h>											//Biblioteca
#include <stdbool.h>										//Biblioteca

//Linzer.dev.art

int main()													//Fun��o principal do programa
{
	int a = 10;												//Definindo vari�veis
	
	if(a > 5  && a < 15)                                	//Conectivo L�gico AND
	{
		printf("\n A variavel 'a' esta entre 5 e 15"); 
		
	}
	
	if(a > 5 || a > 15)                                		//Conectivo L�gico OR
	{
		printf("\n A variavel 'a' eh maior que 5 OU 15"); 
	}
	
	if((a > 5  && a < 15) || a == 20)                      	//Misturando Conectivos
	{
		printf("\n A variavel 'a' esta entre 5 e 15 ou vale 20"); 
	}
	
	return 0;												//Retorna o valor 0
}    
