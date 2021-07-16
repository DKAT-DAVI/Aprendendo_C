/*1. Faça um programa que:
a) peça ao usuário para digitar um número inteiro;
b) armazene esse número numa variável chamada num1;
c) peça ao usuário para digitar outro número inteiro;
d) armazene esse número numa variável chamada num2;
e) some os valores e guarde o resultado numa variável chamada soma;
f) exiba os valores digitados;
g) exiba o resultado da soma.*/
#include <stdio.h> // Incluir bibliotecas

int main()
{	
	// Declaração de variáveis
	int num1, num2, soma;
	// Entrada de dados
	printf("Digite um numero: ");
	scanf("%d", &num1);
	printf("Digite outro numero: ");
	scanf("%d", &num2);
	// Saída de dados
	printf("%d + %d e: %d\n", num1, num2, num1 + num2); //Calcular e exibir a soma dos valores
	system("PAUSE");
	return(0);
}
//NOME: DAVI KALEL ANDRADE TEIXEIRA
