/*1. Fa�a um programa que:
a) pe�a ao usu�rio para digitar um n�mero inteiro;
b) armazene esse n�mero numa vari�vel chamada num1;
c) pe�a ao usu�rio para digitar outro n�mero inteiro;
d) armazene esse n�mero numa vari�vel chamada num2;
e) some os valores e guarde o resultado numa vari�vel chamada soma;
f) exiba os valores digitados;
g) exiba o resultado da soma.*/
#include <stdio.h> // Incluir bibliotecas

int main()
{	
	// Declara��o de vari�veis
	int num1, num2, soma;
	// Entrada de dados
	printf("Digite um numero: ");
	scanf("%d", &num1);
	printf("Digite outro numero: ");
	scanf("%d", &num2);
	// Sa�da de dados
	printf("%d + %d e: %d\n", num1, num2, num1 + num2); //Calcular e exibir a soma dos valores
	system("PAUSE");
	return(0);
}
//NOME: DAVI KALEL ANDRADE TEIXEIRA
