/*1. Dados dois números distintos, informe qual dele é o maior.*/
#include <stdio.h>

int main()
{
    int a, b, maior;
    printf("Digite o primeiro numero: ");
    scanf("%d", &a);
    printf("Digite o segundo numero: ");
    scanf("%d", &b);
    if (a == b)    
        printf("%d e igual a %d\n", a, b);
    else{
        if (a < b)
            printf("%d e maior que %d\n", b, a);
        else 
            printf("%d  e maior que %d\n", a, b);
    }

    system("PAUSE");
    return 0;
}
//NOME: DAVI KALEL ANDRADE TEIXEIRA