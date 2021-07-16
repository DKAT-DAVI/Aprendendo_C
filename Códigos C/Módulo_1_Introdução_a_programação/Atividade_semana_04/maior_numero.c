/*Questão 03 - Faça um programa que receba três números inteiros e diga qual deles é o maior e qual o menor.*/
#include <stdio.h>

int main()
{
    int a, b, c, maior, menor;

    printf("\n-=-=-=MAIOR E MENOR VALOR-=-=-=\n");

    printf("Digite o primeiro numero: ");
    scanf("%d", &a);
    printf("Digite o segundo numero: ");
    scanf("%d", &b);
    printf("Digite o terceiro numero: ");
    scanf("%d", &c);

        maior = a;
        menor = a;

    if (a == b && b == c){
        printf("Todos os numeros digitados sao iguais.\n\n");
    }else{
        if (b > maior){
            maior = b;
        }
        if (c > maior){
            maior = c;
        }
        if(c < menor){
            menor = c;
        }
        if(b < menor){
            menor = b;
        }
            printf("Dos numeros digitados %d e o maior e %d e o menor.\n\n", maior, menor);
        }
    system("PAUSE");
    return 0;
}
//NOME: DAVI KALEL ANDRADE TEIXEIRA