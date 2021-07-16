/*2. Faça um algoritmo para “Calcular o estoque médio de uma peça”, sendo que
ESTOQUEMÉDIO = (QUANTIDADE MÍNIMA + QUANTIDADE MÁXIMA) /2*/
# include <stdio.h> // Inclusão da biblioteca

int main () // Função principal
{
	// Declaração de variáveis 
	int quantmi, quantma;
	// Dados de entrada
	printf("\tDigite a quantidade minima de pecas: ");
	scanf("%d", &quantmi);
	printf("\n\tDigite a quantidade maxima de pecas: ");
	scanf("%d", &quantma);
	// Processamento e saída de dados
	printf("\n\tEstoque medio de %d pecas\n\n", (quantmi + quantma)/2); // Calcular o Estoque medio e exbir na tela
	system ("PAUSE"); // Pausar o programa para visualização de resultado
	return 0; // Retornar 0
}
//NOME: DAVI KALEL ANDRADE TEIXEIRA
