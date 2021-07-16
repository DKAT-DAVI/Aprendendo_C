/*1• Receba o código da peça
• Receba o valor da peça
• Receba a quantidade de peças
• Calcule o valor total da peça (Quantidade * Valor da peça)
• Mostre o código da peça e seu valor total*/
#include <stdio.h> // Inclusão da biblioteca

int main () // Função principal
{	
	//Declaração de variáveis
	float valor, quant;
	int cod;
	//Dados de entrada
	printf("Digite o valor da peca: R$");
	scanf("%f", &valor);
	printf("\nDigite a quantidade de pecas: ");
	scanf("%f", &quant);
	printf("\nDigite o codigo da peca: ");
	scanf("%d", &cod);
	// Dados de saída
	printf("\n O valor total das pecas cod: 00%d e de R$%.2f\n", cod, quant*valor); //Calcular e mostrar o resultado na tela
	system ("PAUSE"); // Pausar o programa para visualização de resultado
	return 0; // Retornar 0
}
//NOME: DAVI KALEL ANDRADE TEIXEIRA
