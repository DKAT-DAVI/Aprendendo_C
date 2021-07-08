/*3. Dada um temperatura em graus Fahrenheit, informe o valor correspondente em
graus Celsius. [Dica: C = 5 * (F - 32) / 9].*/
#include <stdio.h>		//Incluir bibliotecas

int main()		// Função principal
{
	// Declaração de variáveis
	float c, f; 
	// Dados de entrada
	printf("Temperatura em graus Fahrenheit: "); // Temperatura em Fahrenheit
	scanf("%f", &f); // Guardar o valor digitado dentro da variável f
	// Converter Fahrenheit para Celsius
	c = (f - 32) * 1,8; 
	// Dados de saída
	printf("Convertendo: %.1f graus Celsius\n", c); // Exibindo o valor convertido para Celsius
	system("PAUSE"); // Pausar o programa para visualização do resultado
	return 0; // Retornar 0
}
//NOME: DAVI KALEL ANDRADE TEIXEIRA
