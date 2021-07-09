#include <stdio.h>

int main()
{
    int a, b, c, maior, menor;

    printf("Digite o primeiro numero: ");
    scanf("%d", &a);
    printf("Digite o segundo numero: ");
    scanf("%d", &b);
    printf("Digite o terceiro numero: ");
    scanf("%d", &c);

    maior = a;
    menor = a;

    if (a == b && b == c){
        printf("Todos os numeros digitados sao iguais.");
    }else{
        if (b > a && a > c){
            maior = b;
            menor = c;
        }
        if (c > a && a > b);{
            maior = c;
            menor = b;
        }

        //ifc > a && c > b
            //maior = c;
        printf("Dos numeros digitados %d e o maior e %d e o menor", maior, menor);
    }

    return 0;
}