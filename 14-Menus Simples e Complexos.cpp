#include <stdio.h>							//Biblioteca
#include <stdlib.h>							//Biblioteca
#include <stdbool.h>						//Biblioteca
#include <time.h>							//Biblioteca

//Linzer.dev.art

int main()									//Fun��o principal do programa
{
	
	//Definindo vari�veis
	int opcao;
	
	//Dando op��es ao usu�rio e checando se � v�lida
	while(opcao < 1 || opcao > 3)
	{
		printf("Escolha uma op��o digitando o respectivo  n�mero: ");
		printf("\nOpcao: 1");
		printf("\nOpcao: 2");
		printf("\nOpcao: 3\n");
		//Lendo o que o usu�rio digitou
		scanf("\n%d", &opcao);
		
		//Utilizando Switch para mostrar a op��o escolhida
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
