#include <stdio.h>							//Biblioteca
#include <stdlib.h>							//Biblioteca
#include <stdbool.h>						//Biblioteca

//Linzer.dev.art

int main()									//Fun��o principal do programa
{
	bool a = true, b = false;				//Declarando vari�veis
	
	if(a)									//Condi��o if
	{
		printf("\n 'a' eh verdadeiro"); 	//Se verdadeiro, imprime isto
	}
	if(b)									//Condi��o if
	{
		printf("\n 'b' eh verdadeiro"); 	//Se verdadeiro, imprime isto
			}
	else									//Condi��o else
	{
		printf("\n 'b' eh falso");			//Se falso, imprime isto
	}
	
	if (!b)									//Condi��o if
	{
		printf("\n 'b' eh falso");			//Se falso, imprime isto
	}
	
	system("pause");						//Pausa o programa ap�s excecuta
	
	return 0;								//Retorna o valor 0
}    
