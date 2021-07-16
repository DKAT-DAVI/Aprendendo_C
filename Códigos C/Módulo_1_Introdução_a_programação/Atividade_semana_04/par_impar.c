/*Questão 02 - Escreva um programa que recebe um inteiro e diga se é par ou ímpar. Use o operador matemático % resto da divisão ou módulo e o teste condicional if.*/
#include <stdio.h>

int main ()
{
    int a;

    printf("\n-=-=-=PAR OU IMPAR-=-=-=");
    printf("\nDigite um numero inteiro: ");
    scanf("%d", &a);

    if (a % 2 == 0){
        printf("O numero %d e par.\n\n", a);
    }else{
        printf("O numero %d e impar.\n\n", a);
    }
    
    system("pause");
    return 0;
}
//NOME: DAVI KALEL ANDRADE TEIXEIRA