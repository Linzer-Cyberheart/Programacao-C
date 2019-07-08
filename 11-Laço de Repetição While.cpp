#include <stdio.h>					//Biblioteca
#include <stdlib.h>					//Biblioteca
#include <stdbool.h>				//Biblioteca
#include <time.h>					//Biblioteca

//Linzer.dev.art

int main()							//Função principal do programa
{
	
	int a = 1;
	
	do								//Utilizando do while
	{
		printf("\n%d", a);
		a++;			
	}while(a <= 10);
	
	a = 1;
	
	do								//Utilizando do while
	{
		printf("\n%d", a);
		a--;			
	}while(a >= -10);
	
	
	system("pause");
	return 0;						//Retorna o valor 0
}    
