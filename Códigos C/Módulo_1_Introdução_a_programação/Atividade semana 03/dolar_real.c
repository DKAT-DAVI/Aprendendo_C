/*4. Construa um fluxograma que:
 Leia a cotação do Dólar
 Leia um valor em Real
 Converta esse valor para Dólar
 Mostre o resultado*/
# include <stdio.h> // Inclusão da biblioteca

int main () // Função principal
{
	//Declaração de variáveis
	float dolar, real;
	// Entrada de dados 
	printf("Digite a cotacao do dolar: R$");
	scanf("%f", &dolar);
	printf("\nDigite o valor em real: R$");
	scanf("%f", &real);
	// Processamento e saída de dados
	printf("\nR$%.2f e equivalente a US$%.2f\n", real, real/dolar);// Transforma o real em dólar e exibe na tela
	system ("PAUSE"); // Pausar o programa para visualização de resultado
	return 0; // Retornar 0
}
//NOME: DAVI KALEL ANDRADE TEIXEIRA
