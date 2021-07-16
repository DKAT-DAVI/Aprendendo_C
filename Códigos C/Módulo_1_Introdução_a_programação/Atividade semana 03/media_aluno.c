//1. Dadas as duas notas de um aluno, informe a sua média final.
#include <stdio.h> //Incluir bibliotecas necessárias

int main()
{
	// Delaração de variáveis
	float n1, n2, media; 
	//Entrade de dados
	printf("Digite a primeira nota: "); 
	scanf("%f", &n1);
	printf("Digite a segunda nota: ");
	scanf("%f", &n2);
	// Saída de dados
	printf("Media final: %.1f\n", (n1 + n2) / 2); // Calcular e exibir a média final
	// Pausar o programa para exibição do resultado
	system("PAUSE");
	return 0;
}
//NOME: DAVI KALEL ANDRADE TEIXEIRA
