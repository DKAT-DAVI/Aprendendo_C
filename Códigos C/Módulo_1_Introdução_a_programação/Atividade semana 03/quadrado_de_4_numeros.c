/*5. Desenvolva um fluxograma que:
� Leia 4 (quatro) n�meros
� Calcule o quadrado para cada um
� Somem todos e
� Mostre o resultado*/
# include <stdio.h> // Inclus�o da biblioteca

int main () // Fun��o principal
{
	//Declara��o de vari�veis
	int n1, n2, n3, n4;
	// Entradada de 4 n�meros
	printf("Digite o primeiro numero: ");
	scanf("%d", &n1);
	printf("\nDigite o segundo numero: ");
	scanf("%d", &n2);
	printf("\nDigite o terceiro numero: ");
	scanf("%d", &n3);
	printf("\nDigite o quarto numero: ");
	scanf("%d", &n4);
	//Processamento e sa�da de dados 
	printf("\nA soma do quadrado desses numeros e: %d\n\n", (n1*n1)+(n2*n2)+(n3*n3)+(n4*n4)); // Calcular a soma do quadrado dos 4 n�meros e mostrar na tela
	
	system ("PAUSE"); // Pausar o programa para visualiza��o de resultado
	return 0; // Retornar 0
}
//NOME: DAVI KALEL ANDRADE TEIXEIRA
