#include <stdio.h>							//Biblioteca
#include <stdlib.h>							//Biblioteca
#include <string>							//Biblioteca
#include <iostream>							//Biblioteca

//Linzer.dev.art

using namespace std;

int main()									//Função principal do programa
{
	//Criando Matriz
	int matriz[2][2], i, j;
	
	//Passando Valores
	matriz[0][0] = 1;
	matriz[0][1] = 2;
	matriz[1][0] = 3;
	matriz[1][1] = 4;
	
	//Imprimindo valores na tela
	for(i = 0; i < 4; i++)
	{	for(j = 0; j< 2; j++)
		{
		cout << "\n i =" << i << " , j = " << j;
		cout << matriz[i][j] << " ";
		}
		cout << "\n";
	}
	
	system("pause");
	
	return 0;								//Retorna o valor 0
}    
