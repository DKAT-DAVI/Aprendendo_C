/*Faca um programa que leia dez conjuntos de dois valores, o primeiro representando o numero do aluno e o segundo representando a sua altura em centimetros. Encontre o aluno mais alto e o mais baixo. Mostre o numero do aluno mais alto e o numero do aluno mais baixo, junto com suas alturas.*/

#include <stdio.h>
#include <windows.h>

void questao_9() //Função da questão 9
{
    int aluno[10][2]; //Matriz recebendo número e altura
    int i, j; //contadores
    int maior = 0; //aluno maior
    int num_maior = 0; //número do aluno maior
    int menor = 999999; //altura do aluno menor
    int num_menor = 0; //número do aluno menor

    //Enunciado da questão
    printf("\nFaca um programa que leia dez conjuntos de dois valores, o\nprimeiro representando o numero do aluno e o segundo representando a sua\naltura em centimetros. Encontre o aluno mais alto e o mais baixo. Mostre o\nnumero do aluno mais alto e o numero do aluno mais baixo, junto com suas\nalturas.\n\n");

    Sleep(800);
    for (i=0; i<10; i++){ //For para atribuir valor à matriz
        for(j=0; j<1; j++){
            
            printf("%do ALUNO ->", i+1);
            
            printf("\nNumero do aluno: "); 
            scanf("%d", &aluno[i][j]); //Lendo número do aluno
            
            printf("Altura do aluno (em cm): ");
            scanf("%d", &aluno[i][j+1]); //Lendo altura do aluno

            if (aluno[i][j+1] > maior) //Verificando altura maior
            {
                maior = aluno[i][j+1];
                num_maior = aluno[i][j];
            }
            if (aluno[i][j+1] < menor) //Verificando altura menor
            {
                menor = aluno[i][j+1];
                num_menor = aluno[i][j];
            }

            printf("\n");
        }
    }

    Sleep(1000);
    
    //Exibindo altura e número 
    printf("O maior aluno e o aluno %d com %d cm de altura.", num_maior, maior);

    Sleep(800);
    printf("\nO menor aluno e o aluno %d com %d cm de altura.", num_menor, menor);

    return 0;
}

int main(void)
{
    questao_9();

    return 0;
}