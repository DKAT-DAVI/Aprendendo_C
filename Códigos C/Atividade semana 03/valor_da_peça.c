/*1� Receba o c�digo da pe�a
� Receba o valor da pe�a
� Receba a quantidade de pe�as
� Calcule o valor total da pe�a (Quantidade * Valor da pe�a)
� Mostre o c�digo da pe�a e seu valor total*/
#include <stdio.h> // Inclus�o da biblioteca

int main () // Fun��o principal
{	
	//Declara��o de vari�veis
	float valor, quant;
	int cod;
	//Dados de entrada
	printf("Digite o valor da peca: R$");
	scanf("%f", &valor);
	printf("\nDigite a quantidade de pecas: ");
	scanf("%f", &quant);
	printf("\nDigite o codigo da peca: ");
	scanf("%d", &cod);
	// Dados de sa�da
	printf("\n O valor total das pecas cod: 00%d e de R$%.2f\n", cod, quant*valor); //Calcular e mostrar o resultado na tela
	system ("PAUSE"); // Pausar o programa para visualiza��o de resultado
	return 0; // Retornar 0
}
//NOME: DAVI KALEL ANDRADE TEIXEIRA
