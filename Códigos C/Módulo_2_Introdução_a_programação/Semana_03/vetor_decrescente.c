/*3. Criar um vetor A com 8 elementos inteiros. Construir um vetor B de
mesmo tipo e tamanho e com os elementos do vetor A em ordem
decrescente.*/

#include <stdio.h> //Incluindo a biblioteca necessária

int main(void) //Inciando a função principal
{
    int i, j, aux; //Variáveis para usar nos laços for e para decrescer o vetor
    int A[8] = {4, 3, 5, 7, 2, 1, 8, 6}; //Declara e atribui valores ao vetor A
    int B[8]; //Declara o vetor B

    printf("\n===== VETOR DECRESCENTE =====\n");
    printf("  VETOR A: ");

    for (i=0; i<8; i++) //Laço for
    {
        printf("%d ", A[i]); //Exibindo o vetor A
        B[i] = A[i]; //Atribuindo os valores de A ao vetor B
    }

    printf("\n  VETOR B: ");

    for (i=0; i<8; i++){  //Laços for para ordenação em ordem decrescente de B
        for (j=i+1; j<8; j++){
            if (B[j] > B[i])
            {
                aux = B[j];
                B[j] = B[i];
                B[i] = aux;
            }

        }
    }

    for (i=0; i<8; i++)
    {
        printf("%d ", B[i]); //Exibição do vetor B
    }

    printf("\n=============================\n\n");

    system ("PAUSE");
    return 0;
}

// NOME: DAVI KALEL ANDRADE TEIXEIRA