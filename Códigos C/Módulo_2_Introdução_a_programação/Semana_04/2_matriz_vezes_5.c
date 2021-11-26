/*2. Faça um programa que lê uma matriz de 3 x 3 elementos usando um
comando for, multiplica cada elemento por 5 e imprime o resultado.*/

#include <stdio.h> //Incluindo as bibliotecas necessárias

int main(void) //Iniciando a função principal
{
    int matriz[3][3]; //Declarando a matriz 3x3
    int x, y, a, b=0, c=1; //Declarando os contadores

    while (c == 1){ //Iniciando looping

    printf("\n\t    MATRIZ 3x3\n"); //Título para inserir valores na matriz
    
    for (x=0; x<3; x++){ //for para inserir valores nas linhas da matriz
        for(y=0; y<3; y++){ //for para inserir valores nas colunas da matriz
            matriz[x][y] = rand() % 10; //Insere valor aleatório entre 0 e 10
            printf("\t%d ", matriz[x][y]); //Exibir matriz
            }
        printf("\n"); //Quebrar a linha quando ficar completa
        }

    printf("\n\n\t  MATRIZ VEZES 5\n"); //Título para exibir matriz x 5
    
    for (x=0; x<3; x++){ //for para exibir as lilnhas da matriz
        for(y=0; y<3; y++){ //for para exibir as colunas da matriz
            matriz[x][y] *= 5; //Multiplica os elementos por 5
            printf("\t%d ", matriz[x][y]); //Exibir matriz
        }
        printf("\n"); //Quebrar linha quando ficar completa
    }
        printf("\n");
        system ("PAUSE"); //Pausa
        system ("cls"); //Limpar a tela
        printf("\nDigite 1 para REPETIR e 2 para FINALIZAR: "); 
        scanf("%d", &c); //Lendo a condição do looping
        system ("cls"); //Limpando a tela 
    }
    
    return 0; //Retornando 0
}

//NOME: DAVI KALEL ANDRADE TEIXEIRA