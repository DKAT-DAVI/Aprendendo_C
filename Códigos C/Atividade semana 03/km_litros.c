/*2. Dados uma distância e o total de litros de combustível gasto por um automóvel
para percorrê-la, informe o consumo médio.*/
#include <stdio.h> // Incluir bibliotecas

int main() 
{
	// Declaração de variáveis
	float km, litros, cmedio;
	// Dados de entrada
	printf("Quantos km percorridos: "); 
	scanf("%f", &km); 
	printf("Quantos litros de combustivel gastos: "); 
	scanf("%f", &litros);
	// Saída de dados
	printf("O consumo medio foi de %.1f km por litro \n", km/litros); // Calcular e exibir o resultado
	system("PAUSE");
	return 0;
}
// NOME: DAVI KALEL ANDRADE TEIXEIRA
