#include <stdio.h> // Incluir Bibliotecas

int main()	//Função principal
{
	//Declaração de variáveis
	int cont, num;
	//Entrada de dados
	printf("\t=-=-=-=-=-=- CALCULO FATORIAL -=-=-=-=-=-=-=\n\n"); //Título
	//Pede um número para calcular o fatorial
	printf("\tDigite um numero para calcular o fatorial: "); 
	scanf("%d", &num);
	printf("\n\t\t%d! = %d ", num, num);
	/* Função for para enquanto o contador for maior igual 1
	diminuir um número */
	for(cont = num - 1; cont >= 1; cont--){
		printf("x %d ", cont);
		num = num * cont; //calcula num vezes o contador
	}
	//Exibe o resultado
	printf("= %d\n\n", num);
	
	system ("PAUSE"); //Pausa o executável para visualizaro resultado
	return 0; // Retornar 0
}
