#include <stdio.h>							//Biblioteca
#include <stdlib.h>							//Biblioteca
#include <stdbool.h>						//Biblioteca

//Linzer.dev.art

int main()									//Função principal do programa
{
	bool a = true, b = false;				//Declarando variáveis
	
	if(a)									//Condição if
	{
		printf("\n 'a' eh verdadeiro"); 	//Se verdadeiro, imprime isto
	}
	if(b)									//Condição if
	{
		printf("\n 'b' eh verdadeiro"); 	//Se verdadeiro, imprime isto
			}
	else									//Condição else
	{
		printf("\n 'b' eh falso");			//Se falso, imprime isto
	}
	
	if (!b)									//Condição if
	{
		printf("\n 'b' eh falso");			//Se falso, imprime isto
	}
	
	system("pause");						//Pausa o programa após excecuta
	
	return 0;								//Retorna o valor 0
}    
