/*2. Dados uma dist�ncia e o total de litros de combust�vel gasto por um autom�vel
para percorr�-la, informe o consumo m�dio.*/
#include <stdio.h> // Incluir bibliotecas

int main() 
{
	// Declara��o de vari�veis
	float km, litros, cmedio;
	// Dados de entrada
	printf("Quantos km percorridos: "); 
	scanf("%f", &km); 
	printf("Quantos litros de combustivel gastos: "); 
	scanf("%f", &litros);
	// Sa�da de dados
	printf("O consumo medio foi de %.1f km por litro \n", km/litros); // Calcular e exibir o resultado
	system("PAUSE");
	return 0;
}
// NOME: DAVI KALEL ANDRADE TEIXEIRA
