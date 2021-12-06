/*Faca um programa que imprima na tela os numeros de 1 a 20, um abaixo do outro. Depois modifique o programa para que ele mostre numeros um ao lado do outro."*/

#include <stdio.h>
#include <windows.h>

void questao_6() //Função da questão 6
{
    int vetor[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 , 16, 17, 18, 19, 20}; //Vetor com os números de 1 à 20
    int i; //Contador para o for

    //Enunciado da questão
    printf("\nFaca um programa que imprima na tela os numeros de 1 a 20, um\nabaixo do outro. Depois modifique o programa para que ele mostre \nnumeros um ao lado do outro.");

    Sleep(800);
    printf("\n\n=== NUMEROS ABAIXO ===\n"); //Exibindo números abaixo

    for (i=0; i<20; i++)
    {
        printf("\t%d\n", vetor[i]);
        Sleep(800);
    }
    
    printf("======================\n");

    //Exibindo números ao lado
    Sleep(800);
    printf("\n================= NUMEROS AO LADO ================\n");

    for (i=0; i<20; i++)
    {
        printf("%d ", vetor[i]);
        Sleep(800);
    }
    
    printf("\n==================================================");


    return 0;
}

int main(void)
{
    questao_6();

    return 0;
}