/*Utilizando o ambiente Dev-C++ digite, salve, compile e execute 
o exem- plo do programa de multiplica��o conforme apresentado nesta se��o.*/
#include <stdio.h>		// Imporata��o das Bibliotecas
#include <stdlib.h>

int main()		// Primeiro comando a ser executado 
{		// Abertura do bloco de comandos
	
	int num1, num2, mult;	/* Declara��o de vari�veis*/
	printf("Digite o primeiro numero: ");	//A fun��o printf permite que uma msg seja exibida na tela
	scanf("%d", &num1);	//Fun��o scanf vai ler todos os dados que forem digitados '%d' indica que se trata de um n�mero inteiro
	printf("Digite o segundo numero: ");
	scanf("%d", &num2);
	mult = num1 * num2;	// Atruibui a vari�vel mult o valor do produto entre num1 e num2
	printf("%d x %d e: %d \n", num1, num2, mult); //Exibe o resultado na tela
	system("PAUSE");	/* Faz o programa dar uma pausa para que seja poss�vel visualizar o resultado na tela*/
	return (0);	//Indica o n�mero que est� sendo retornado pela fun��o
	
}		// Fechamento do bloco de comandos
//NOME: DAVI KALEL ANDRADE TEIXEIRA
