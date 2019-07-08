#include <stdio.h>								//Biblioteca
#include <stdlib.h>								//Biblioteca
#include <stdbool.h>							//Biblioteca
#include <time.h>								//Biblioteca

//Linzer.dev.art

int main()										//Função principal do programa
{
	
	//Definindo variáveis
	char palavra [255];
	
	//Instruão ao usuário
	printf("\nDigite uma palavra:\n");
	
	//Limpar o Buffer(Faz a leitura de mais de uma letra)
	setbuf(stdin, 0);
	
	//Ler a String
	fgets(palavra, 255, stdin);
	
	//Limpar casas não utilizadas
	palavra[strlen(palavra)-1] = '\0';
	
	//Imprime na tela
	printf("%s", palavra);
	
	system("pause");
	
	return 0;									//Retorna o valor 0
}    
