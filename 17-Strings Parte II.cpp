#include <stdio.h>						//Biblioteca
#include <stdlib.h>						//Biblioteca
#include <string>						//Biblioteca
#include <iostream>						//Biblioteca


using namespace std;

//Linzer.dev.art

int main()								//Função principal do programa
{
	//Definindo uma String
	string palavra;
	
	//Imprimindo na tela
	printf("\nDigite uma palavra: \n");
	
	//Lendo uma String
	cin >> palavra;
	
	//Imprimindo na tela
	cout << "\n A palavra eh: " << palavra;
	
	system("pause");
	return 0;							//Retorna o valor 0
}    
