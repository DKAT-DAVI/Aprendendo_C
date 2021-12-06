/*Faca um programa que calcule e mostre a media aritmetica de N notas.*/

#include <stdio.h>
#include <windows.h>

void questao_8() //Função da questão 8
{
    float notas, soma=0; //Variáveis notas e soma/média
    int opcao=1, num=1; //Variáveis auxiliares

    //Enunciado da questão
    printf("\nFaca um programa que calcule e mostre a media aritmetica de N notas.\n");

    //Loop de n notas
    while (opcao != 0)
    {
        printf("\nDigite a %da nota: ", num);
        scanf("%f", &notas); //Lendo as notas do aluno

        num++;

        soma += notas; //Somando as notas

        printf("\n=================================");
        printf("\n|Adicionar outra notas: Digite 1|");
        printf("\n|   Calcular a media: Digite 0  |");
        printf("\n=================================");
        printf("\nDigite sua opcao: ");
        scanf("%d", &opcao); //Opção de n notas

    }

    //Calculando a média
    Sleep(800);
    printf("\nA media das notas foi %.2f", soma/(num-1));

    return 0;
}

int main(void)
{
    questao_8();

    return 0;
}