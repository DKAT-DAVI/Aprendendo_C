/*2. Criar um vetor A com 6 elementos inteiros. Construir um vetor B de
mesmo tipo e tamanho, sendo que cada elemento do vetor B deverá
ser o quadrado do respectivo elemento de A, ou seja: B[i] = A[i] * A[I].*/

#include <stdio.h> //Incluindo a biblioteca necessário

int main(void) //Iniciando a função principal
{
    int i; //Contador para usar no laço for
    int A[6] = {1, 2, 3, 4, 5, 6}; //Declara e atribui valor ao vetor A
    int B[6]; //Declara o vetor B

    printf("\n===== VETOR AO QUADRADO =====\n");
    printf("   VETOR A: ");

    for (i=0; i<6; i++) //Laço for
    {
        printf("%d ", A[i]); //Exibir vetor A
        B[i] = A[i] * A[i]; //Atribuir A² em B
    }

    printf("\n   VETOR B: ");

    for (i=0; i<6; i++)
    {
        printf("%d ", B[i]); //Exibir o vetor B
    }

    printf("\n=============================\n\n");

    system ("PAUSE");
    return 0;
}

//NOME: DAVI KALEL ANDRADE TEIXEIRA