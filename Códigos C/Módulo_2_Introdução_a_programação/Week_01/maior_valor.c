//Dados dois números distintos, informe qual dele é o maior.

#include <stdio.h>

int maior(int a, int b){
    
    if (b == a)
    {
        printf("%d is equal to %d", a, b);
    }
    else
    {
        if (a > b){
            printf("%d is greater than %d", a, b);
        }
        if (b > a){
            printf("%d is greater than %d", b, a);
        }
    }
    return 0;    
}

int main(){
    
    while (1)
    {
    int num1, num2;

    printf("Type a number: ");
    scanf("%d", &num1);

    printf("Type another number: ");
    scanf("%d", &num2);

    maior(num1, num2);
    printf("\n\n");
    }
    return 0;
}
//NOME: DAVI KALEL ANDRADE TEIXEIRA