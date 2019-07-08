#include <stdio.h>								//Biblioteca
#include <stdlib.h>								//Biblioteca
#include <stdbool.h>							//Biblioteca
#include <time.h>								//Biblioteca

#define TAM 3
//Linzer.dev.art

int main()										//Função principal do programa
{
	
	int vetor[TAM], i; 							//Criando um vetor
	
	vetor[0] = 5;								//Adicionando valores ao vetor
	vetor[1] = 10;
	vetor[2] = 15;
	
	printf("\nPosicao 0: %d\n", vetor[0]); 		//Imprimindo o vetor
	printf("\nPosicao 1: %d\n", vetor[1]);
	printf("\nPosicao 2: %d\n", vetor[2]);
	
	for(i = 0; i < TAM; i++)					//Usando o For com Vetor de diversas formas
	{
		printf("\nPosicao %d: %d\n", i, vetor[i]);
	}
	
	for(i = 0; i < TAM; i++)
	{	
		vetor[i] = vetor[i] + 1;
	}
	
	for(i = 0; i < TAM; i++)
	{	
		scanf("%d", &vetor[i]);
	}
	
	for(i = 0; i < TAM; i++)
	{
		printf("\nPosicao %d: %d\n", i, vetor[i]);
	}
	
	system("pause");
	
	return 0;									//Retorna o valor 0
}    
