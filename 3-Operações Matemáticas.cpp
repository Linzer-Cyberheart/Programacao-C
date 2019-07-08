#include <stdio.h>													//Biblioteca
#include <stdlib.h>													//Biblioteca
#include <stdbool.h>												//Biblioteca

//Linzer.dev.art

int main()															//Função principal do programa
{
	int a = 6, b =3;												//Declarando as variáveis
	
	printf("\n Soma de %d + %d = %d", a, b, a + b);					//Somando
	printf("\n Multiplicacao de %d * %d = %d", a, b, a * b);		//Multiplicando
	printf("\n Subtraçao de %d - %d = %d", a, b, a - b);			//Subtraindo
	printf("\n Divisao de %d / %d = %d", a, b, a / b);				//Dividinho
	printf("\n Resto da Divisao entre %d e %d = %d", a, b, a % b);	//Resto da divisão
	
	system("pause");												//Pausa o programa após excecutar
	
	return 0;														//Retorna o valor 0
}
