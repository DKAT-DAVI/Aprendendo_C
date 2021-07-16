/*Escreva uma função que receba dois números inteiros retorne o menor
número para a função principal  (main).*/
#include <stdio.h>

int menor(int a, int b)
{
    if (a == b){
        printf("\n\tOS DOIS NUMEROS SAO IGUAIS");
    }
    else if(a < b){
        printf("\n\tO MENOR VALOR E: %d", a);
    }
    else if(b < a){
        printf("\n\tO MENOR VALOR E: %d", b);
    }
    return 0;
}

int main()
{
    int num1, num2;

    printf("\n\t======= MENOR VALOR =======\n");
    printf("\n\tDIGITE O PRIMEIRO NUMERO: ");
    scanf("%d", &num1);

    printf("\n\tDIGITE O SEGUNDO NUMERO ");
    scanf("%d", &num2);

    menor(num1, num2);

    return 0;
}
//NOME: DAVI KALEL ANDRADE TEIXEIRA