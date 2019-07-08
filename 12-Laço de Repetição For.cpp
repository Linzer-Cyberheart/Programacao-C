#include <stdio.h>							//Biblioteca
#include <stdlib.h>							//Biblioteca
#include <stdbool.h>						//Biblioteca
#include <time.h>							//Biblioteca

//Linzer.dev.art

int main()									//Função principal do programa
{
	
	int i;
	
	for(i=1; i <=10; i++)					//Utilizando o For para tabuada de 5
	{
		printf("\n 5 X %d = %d", i, i * 5);
	}	
	
	for(i=10; i > 0; i--)					//Utilizando o For para decremento
	{
		printf("\n%d", i);
	}
	
	for(i=0; i <=10; i+=2)					//Utilizando o For 
	{
		printf("\n%d",i);
	}
	system("pause");
	
	return 0;								//Retorna o valor 0
}    
