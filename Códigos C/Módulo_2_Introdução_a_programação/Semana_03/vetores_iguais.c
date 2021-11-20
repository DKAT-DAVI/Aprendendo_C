/*1. Criar um vetor A com 5 elementos inteiros. Construir um vetor B de
mesmo tipo e tamanho e com os "mesmos" elementos do vetor A, ou
seja, B[i] = A[i].*/

#include <stdio.h> //incluindo as bibliotecas necessárias

int main() //Inciando a função principal
{
    int i; // Contador para o laço for
    int A [5] = {10, 20, 30, 40, 50}; // Declara e atribui valores ao vetor A
    int B [5]; // Declara o vetor B

    printf("\n==== VETORES IGUAIS ====\n");
    printf("VETOR A: ");

    for (i=0; i<5; i++) // Laço for
    {
        printf("%d ", A[i]); // Exibindo o vetor A
        B[i] = A[i]; // Atribuindo os valores de A em B
    }

    printf("\nVETOR B: ");

    for (i=0; i<5; i++)
    {
        printf("%d ", B[i]); // Exibindo o vetor B
    }

    printf("\n========================\n\n");

    system ("PAUSE");
    return 0; 
}

//NOME: DAVI KALEL ANDRADE TEIXEIRA