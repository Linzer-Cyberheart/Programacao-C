#include <stdio.h>										//Biblioteca
#include <stdlib.h>										//Biblioteca
#include <stdbool.h>									//Biblioteca

//Linzer.dev.art

int main()												//Função principal do programa
{
	int a;												//Declarando uma variável 'a'
	a = 5;												//Adicionando um valor a varivável 'a'
	float b;											//Declarando uma variável 'b'
	b = 2.3;											//Adicionando um valor a varivável 'b'
	char c;												//Declarando uma variável 'c'
	c = 'a';											//Adicionando um valor a varivável 'c'
	bool d;												//Declarando uma variável 'd'
	d = true;											//Adicionando um valor a varivável 'd'
	
	printf("\n O valor de 'a' eh = %d", a);				//Imprimindo a variável 'a'
	printf("\n O valor de 'b' eh = %f", b);				//Imprimindo a variável 'b'
	printf("\n O valor de 'c' eh = %c", c);			  	//Imprimindo a variável 'c'
	
	printf("\n Digite um novo valor para a: ");			//Pedindo ao usuário um novo valor para 'a'
	scanf("%d", &a);  									//Adicionando o valor desejado
	
	printf("\n Digite um novo valor para b: ");			//Pedindo ao usuário um novo valor para 'b'
	scanf("%f", &b);  									//Adicionando o valor desejado
	
	printf("\n Digite um novo valor para c(letras): ");	//Pedindo ao usuário um novo valor para 'c'
	scanf(" %c", &c);									//Adicionando o valor desejado
	
	printf("\n Digite um novo valor para d: ");	//Pedindo ao usuário um novo valor para 'c'
	scanf(" %d", &d);
	
	printf("\n O novo valor de 'a' eh: %d", a);			//Imprimindo o novo valor de 'a'
	printf("\n O novo valor de 'b' eh: %.2f", b);		//Imprimindo o novo valor de 'b'
	printf("\n O novo valor de 'c' eh: %c", c);			//Imprimindo o novo valor de 'c'
	printf("\n O novo valor de 'd' eh: %d", d);			//Imprimindo o novo valor de 'd'
	
	system("pause");									//Pausa o programa após excecutar
	
	return 0;											//Retorna o valor 0
}
