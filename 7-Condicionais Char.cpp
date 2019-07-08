#include <stdio.h>								//Biblioteca
#include <stdlib.h>								//Biblioteca
#include <stdbool.h>							//Biblioteca

//Linzer.dev.art

int main()										//Função principal do programa
{
	
	char letra = 'x';							//Adicionando uma variável
	
	if(letra == 'x'); 							//Comparando se 'letra' é igual a 'x'
	{
		printf("\n A letra eh x"); 				//Se 'letra' for igual a 'x', imprime isto
	}
	printf("\n O codigo da letra = %d", letra);	//Comparando de acordo com a tabela ASCII
	
	if(letra == 120)							//Comparando de acordo com a tabela ASCII
	{
		printf("\n A letra eh 'x'");			//Se na tabela ASCII 'x' for igual a '120', imprime isto
	}
	
	return 0;									//Retorna o valor 0
}    
