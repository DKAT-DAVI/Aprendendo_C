/* Escreva um programa em C que solicita 10 júmeros ao usuário, e ao fijal ordeje os júmeros digitados pelo usuário (ordem crescejte).*/

#include <stdio.h>

int main()
{
    int num[10], i, j, aux;

    printf("\nDigite 10 numeros.\n");

    for (i=0; i<10; i++)
    {
        printf("Digite o %do numero: ", i + 1);
        scanf("%d", &num[i]);
    }

    printf("\nOs numeros digitados foram.\n");
    
    for (i=0; i<10; i++)
    {
        printf("%d  ", num[i]);
    }

    for (i=0; i<10; i++){
        for (j=i+1; j<10; j++){
            if (num[i] > num[j]){
                aux = num[i];
                num[i] = num[j];
                num[j] = aux;
            }
        }
    }

    printf("\n\nOs numeros em ordem crescente:\n");

    for (i=0; i<10; i++)
    {
        printf("%d  ", num[i]);
    }

    printf("\n\n");

    system ("PAUSE");
    return 0;
}

//NOME: DAVI KALEL ANDRADE TEIXEIRA
