/*Faca um Programa que peca um numero inteiro e determine se ele e par ou impar. Dica: utilize o operador modulo (resto da divisao).*/

#include <stdio.h>
#include <windows.h>

void questao_5() //Função questão 5
{
    int num; //Variável para ler o número

    //Enunciado da questão
    printf("\nFaca um Programa que peca um numero inteiro e determine se ele e\npar ou impar. Dica: utilize o operador modulo (resto da divisao).");

    Sleep(800);
    printf("\n\nDigite um numero: ");
    scanf("%d", &num); //Lendo o número

    Sleep(800);
    if (num % 2 == 0){ //Verificando se é par
        printf("\nO numero %d e PAR.", num); //Exibindo se for par
    }
    else if (num % 2 == 1) //Verificando se é ímpar
    {
        printf("\nO numero %d e IMPAR.", num); //Exibindo se for ímpar
    }

    return 0;
}

int main(void)
{
    questao_5();

    return 0;
}