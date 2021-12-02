#include <stdio.h>
#include <windows.h>

void title() //Declarando função title
{
    Sleep(800); //Usando função Sleep() para fazer pequenas pausas no programa
    printf("\n======= INTRODUCAO A PROGRAMACAO ======="); //Cabeçalho
    Sleep(800);
    printf("\n|         ATIVIDADE AVALIATIVA         |");
    Sleep(800);
    printf("\n|                                      |");
    Sleep(800);
    printf("\n|  Aluno: Davi Kalel Andrade Teixeira  |");
    Sleep(800);
    printf("\n|     Turma: 1o ano - Informatica      |");
    Sleep(800);
    printf("\n|           Data: 03/12/2021           |");
    Sleep(800);
    printf("\n|          Escola: IFNMG - MOC         |");
    Sleep(800);
    printf("\n|                                      |");
    Sleep(800);
    printf("\n========================================\n");
    Sleep(800);

    return 0; 
}

int main(void)
{
    title();
    return 0;
}