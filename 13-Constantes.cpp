#include <stdio.h>							//Biblioteca
#include <stdlib.h>							//Biblioteca
#include <stdbool.h>						//Biblioteca
#include <time.h>							//Biblioteca

#define TAM 10 								//Declarando uma constante

//Linzer.dev.art

int main()									//Fun��o principal do programa
{
	int i;									//Definindo a vari�vel
	
	printf("%d", TAM);						//Demonstra��o com o For	
	
	for(i = 1; i < TAM; i++)
	{
		printf("\n%d", i);					//Imprime o valor na tela
	}
	
	system("pause");
	
	return 0;								//Retorna o valor 0
}    
