/*1. Crie um programa em C que preencha uma matriz com 3 linhas X 3
colunas e depois mostra os dados recebidos.*/

#include <stdio.h> //Incluindo a biblioteca necessária

int main(void) //Inciando a função principal
{
    int matriz[3][3]; //Declarando a matriz 3x3
    int a, b, c=0; //Declarando os contadores

    printf("\n\t     MATRIZ 3x3\n"); //Título

    for (a=0; a<3; a++)  //for para preencher as linhas
        for (b=0; b<3; b++){ //for para preencher as colunas
            printf("\tElemento [%d,%d] -> ", a, b); //Exibindo mensagem na tela
            scanf("%d", &matriz[a][b]); //Atribuindo valor a matriz
        }
    
    printf("\n\tDADOS DA MATRIZ 3x3\n"); //Título para exibir a matriz
    printf("\t ");
    
    for (a=0; a<3; a++){ //for de exibição das linhas da matriz
        for (b=0; b<3; b++){ //for de exibição das colunas da matriz
            printf("%d\t", matriz[a][b]); //Exibindo a matriz
        }
        printf("\n\t "); //Qubra de linha
        }

    printf("\n\n");
    system ("PAUSE"); //Pausa para exibir o programa na tela
    return 0; //Retorna 0
}

//NOME: DAVI KALEL ANDRADE TEIXEIRA

