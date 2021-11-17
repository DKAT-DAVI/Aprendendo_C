/*Questão 02 - Escreva um programa que pergunte ao usuário quantos alunos tem na sala dele. Em seguida, peça ao usuário para que entre com as notas de todos os alunos da sala, um por vez. Por fim, o programa deve mostrar a média aritmética da turma.*/

#include <stdio.h>

int main()
{
    int alunos, i;

    printf("\nQuantos alunos tem na sala? ");
    scanf("%d", &alunos);

    printf("\nDigite as notas dos alunos:\n");

    float notas[alunos], soma=0;

    for (i=0; i<alunos; i++)
    {
        printf("\n%do aluno: NOTA -> ", i+1);
        scanf("%f", &notas[i]);
    }

    for (i=0; i<alunos; i++)
    {
        soma += notas[i];
    }

    printf("\nA media das notas de todos os alunos foi %.2f", soma / alunos);

    printf("\n\n");
    system ("PAUSE");
    return 0;
}

//NOME: DAVI KALEL ANDRADE TEIXEIRA