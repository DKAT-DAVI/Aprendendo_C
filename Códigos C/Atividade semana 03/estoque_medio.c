/*2. Fa�a um algoritmo para �Calcular o estoque m�dio de uma pe�a�, sendo que
ESTOQUEM�DIO = (QUANTIDADE M�NIMA + QUANTIDADE M�XIMA) /2*/
# include <stdio.h> // Inclus�o da biblioteca

int main () // Fun��o principal
{
	// Declara��o de vari�veis 
	int quantmi, quantma;
	// Dados de entrada
	printf("\tDigite a quantidade minima de pecas: ");
	scanf("%d", &quantmi);
	printf("\n\tDigite a quantidade maxima de pecas: ");
	scanf("%d", &quantma);
	// Processamento e sa�da de dados
	printf("\n\tEstoque medio de %d pecas\n\n", (quantmi + quantma)/2); // Calcular o Estoque medio e exbir na tela
	system ("PAUSE"); // Pausar o programa para visualiza��o de resultado
	return 0; // Retornar 0
}
//NOME: DAVI KALEL ANDRADE TEIXEIRA
