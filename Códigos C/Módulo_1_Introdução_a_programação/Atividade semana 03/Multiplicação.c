/*Utilizando o ambiente Dev-C++ digite, salve, compile e execute 
o exem- plo do programa de multiplicação conforme apresentado nesta seção.*/
#include <stdio.h>		// Imporatação das Bibliotecas
#include <stdlib.h>

int main()		// Primeiro comando a ser executado 
{		// Abertura do bloco de comandos
	
	int num1, num2, mult;	/* Declaração de variáveis*/
	printf("Digite o primeiro numero: ");	//A função printf permite que uma msg seja exibida na tela
	scanf("%d", &num1);	//Função scanf vai ler todos os dados que forem digitados '%d' indica que se trata de um número inteiro
	printf("Digite o segundo numero: ");
	scanf("%d", &num2);
	mult = num1 * num2;	// Atruibui a variável mult o valor do produto entre num1 e num2
	printf("%d x %d e: %d \n", num1, num2, mult); //Exibe o resultado na tela
	system("PAUSE");	/* Faz o programa dar uma pausa para que seja possível visualizar o resultado na tela*/
	return (0);	//Indica o número que está sendo retornado pela função
	
}		// Fechamento do bloco de comandos
//NOME: DAVI KALEL ANDRADE TEIXEIRA
