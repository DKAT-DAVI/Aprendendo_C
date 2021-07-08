#include <stdio.h>

int main ()
{
    int idade;

    printf("Por favor digite a sua idade: ");
    scanf("%i", &idade);

    if (idade < 18){
        printf("Voce e menor de idade!");
    } else {
        printf("Bebidas alcoolicas liberadas");
    }

    return 0;
}