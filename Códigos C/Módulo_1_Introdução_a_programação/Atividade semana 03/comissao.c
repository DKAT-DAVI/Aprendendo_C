/*6. Construa um algoritmo para pagamento de comiss�o de vendedores de pe�as, levando se em
considera��o que sua comiss�o ser� de 10% do total da venda e que voc� tem os seguintes dados:
o Identifica��o do vendedor
o C�digo da pe�a
o Pre�o unit�rio da pe�a
o Quantidade vendida*/
# include <stdio.h> // Inclus�o da biblioteca

int main () // Fun��o principal
{
	//Declaração de variaveis
	char nome[150];
	int cod, quant;
	float preco, comissao, total;
	// Dados de entrada
	printf("NOME DO VENDEDOR: ");
	scanf("%s", &nome);
	printf("\nCODIGO DA PECA: ");
	scanf("%d", &cod);
	printf("\nPRECO DA PECA: R$");
	scanf("%f", &preco);
	printf("\nTOTAL DE PECAS VENDIDAS: ");
	scanf("%d", &quant);
	// Calcular o valor total vendido
	total = quant * preco;
	// Calcular a comiss�o do vendedor
	comissao = total / 10;
	// Dados de sa�da
	printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
	printf("\nVENDEDOR %s", nome);
	printf("\n\n%d PECAS 00%d VENDIDAS", quant, cod);
	printf("\n\nTOTALIZANDO UM VALOR DE R$%.2f", total);
	printf("\n\nCOMISSAO DE VENDAS: R$%.2f\n", comissao);
	printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
	
	system ("PAUSE"); // Pausar o programa para visualiza��o de resultado
	return 0; // Retornar 0
}
//NOME: DAVI KALEL ANDRADE TEIXEIRA
