#include <stdio.h>							//Biblioteca
#include <stdlib.h>							//Biblioteca
#include <stdbool.h>						//Biblioteca
#include <time.h>							//Biblioteca

//Linzer.dev.art

int main()									//Função principal do programa
{
	
	//Definindo variáveis
	int opcao;
	
	//Dando opções ao usuário e checando se é válida
	while(opcao < 1 || opcao > 3)
	{
		printf("Escolha uma opção digitando o respectivo  número: ");
		printf("\nOpcao: 1");
		printf("\nOpcao: 2");
		printf("\nOpcao: 3\n");
		//Lendo o que o usuário digitou
		scanf("\n%d", &opcao);
		
		//Utilizando Switch para mostrar a opção escolhida
		switch(opcao)
		{
			case 1:
				printf("\nOpcao 1 escolhida.\n");
			break;
			case 2:
				printf("\nOpcao 2 escolhida.\n");
			break;
			case 3:
				printf("\nOpcao 3 escolhida.\n");
			break;
			default:
				printf("\nOpcao invalida.\n");
			break;
		}
	}
	system("pause");
	
	return 0;								//Retorna o valor 0
}    
