/*3. Dada um temperatura em graus Fahrenheit, informe o valor correspondente em
graus Celsius. [Dica: C = 5 * (F - 32) / 9].*/
#include <stdio.h>		//Incluir bibliotecas

int main()		// Fun��o principal
{
	// Declara��o de vari�veis
	float c, f; 
	// Dados de entrada
	printf("Temperatura em graus Fahrenheit: "); // Temperatura em Fahrenheit
	scanf("%f", &f); // Guardar o valor digitado dentro da vari�vel f
	// Converter Fahrenheit para Celsius
	c = (f - 32) * 1,8; 
	// Dados de sa�da
	printf("Convertendo: %.1f graus Celsius\n", c); // Exibindo o valor convertido para Celsius
	system("PAUSE"); // Pausar o programa para visualiza��o do resultado
	return 0; // Retornar 0
}
//NOME: DAVI KALEL ANDRADE TEIXEIRA
