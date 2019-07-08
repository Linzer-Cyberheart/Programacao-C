#include <stdio.h>		     						//Biblioteca
#include <stdlib.h>									//Biblioteca
#include <stdbool.h>								//Biblioteca

//Linzer.dev.art

int main()						   					//Função principal do programa
{
	
	int a = 5;										//Declarando a variável 'a'
	float b = 2.5;									//Declarando a variável 'b'
	char c = 'x';									//Declarando a variável 'c'
	
	if(a == 5)										//Condição 'if'
	{	
		printf("Igual a 5.");						//Se 'a' igual a 5, isto ira  imprimir na tela
	}
	if(b == 2.5)	
		printf("Igual a 2.5");						//Se 'b' igual a 2.5, isto ira imprimir na tela
	
	
	if(a%2 ==1)										//Usando 'if' para verificar se um número é impar ou par
	{				
		printf("\nA variavel eh impar.");			//Se impar, imprime isto na tela.
	}
	else
	{
		printf("\n A variavel eh par.");			//Se par, imprime isto na tela.
	}
	
	if(c == 'x')
	{
		printf("\n A variavel a igual a %c", c);	//Caso a variavel 'c' seja igual a 'x', imprime isto
	}
	
	system("pause");								//Pausa o programa após excecutar
	
	return 0;										//Retorna o valor 0
}	
