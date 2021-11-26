/*3. Faça um programa que lê um vetor de 3 elementos e uma matriz de 3
x 3 elementos. Em seguida o programa deve fazer a multiplicação do
vetor pelas colunas da matriz.*/

#include <stdio.h> //Incluindo as bibliotecas necessárias

void jump(){ //Função para esperar e limpar a tela
    printf("\n");
    system ("PAUSE");
    system ("cls");
    return 0;
}


int main(void) //Inicializando a função principal
{
    int vet[3]; //Declarando o vetor
    int matriz[3][3]; //Declarando a matriz
    int i, j; //Declarando os contadores

    printf("\n\t    VETOR\n"); //Título atribuir valor ao vetor
    
    for (i=0; i<3; i++){ //for para inserir valor no vetor
        printf("Insira o elemento [%d] do vetor: ", i); 
        scanf("%d", &vet[i]); //Inserindo valor no vetor
    }

    printf("\n\t    MATRIZ\n"); //Título atribuir valor a matriz

    for (i=0; i<3; i++){ //for para inserir valor nas linhas da matriz
        for (j=0; j<3; j++){ //for para inserir nas  valor colunas da matriz
            printf("Insira o elemento [%d,%d] da matriz: ", i, j);
            scanf("%d", &matriz[i][j]); //Inserindo valor na matriz
        }
        printf("\n"); //Quebra de linha quando encher a linha
    }

    jump(); //Função para esperar e limpar a tela

    printf("\n      VETOR\n"); //Título para exibir o vetor

    for (i=0; i<3; i++){
        printf("%d\t", vet[i]); //Exibindo o vetor
    }

    printf("\n\n      MATRIZ\n"); //Título para exibir a matriz
    for(i=0; i<3; i++){
        for (j=0; j<3; j++){
            printf("%d\t", matriz[i][j]); //Exibindo a matriz
        }
        printf("\n"); //Quebra de linha quando encher a linha
    }

    printf("\nVETOR VEZEZ MATRIZ\n"); //Título do produto vetor*matriz

    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            printf("\nVetor %d x Matriz %d = %d", vet[i], matriz[j][i], vet[i]*matriz[j][i]); //Produto vetor * coluna da matriz
        }
        printf("\n\t"); //Quebra de linha
    }

    jump(); //Função para esperar e limpar a tela
    return 0; //Retorna 0
}
//NOME: DAVI KALEL ANDRADE TEIXEIRA