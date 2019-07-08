#include <stdio.h>					//Biblioteca
#include <stdlib.h>					//Biblioteca
#include <stdbool.h>				//Biblioteca
#include <time.h>

//Linzer.dev.art

int main()							//Função principal do programa
{
	
									//Definindo variáveis
	int a = 1, b = 10;
									//Utilizando while
	while(a <= 10)
	{
		printf("\n %d", a); 		//Imprimindo na tela o resultado(Incremento)
		a += 1;						//a ++
	}	
	
	a = 1;
	
	do
	{
		printf("\n%d", a);
		a++;			
	}while(a <= 10);
	
	do
	{
		printf("\n%d", b);
		b--;			
	}while(b <= 1);
	
	while(b >= 1)
	{
		printf("\n %d", b); 		//Imprimindo na tela o resultado(Decremento)
		b -= 1; 					//a --
	}
	
	system("pause");
	return 0;						//Retorna o valor 0
}    
