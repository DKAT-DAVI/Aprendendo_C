/*Questão 03 - Faça um programa que solicite a idade de várias pessoas e imprima: Total de pessoas com menos de 21 anos, total de pessoas com mais de 50 anos, O programa termina quando idade for = 0.*/

#include <stdio.h>

int main()
{
    int idade, num=1, cont21=0, cont50=0;

    printf("\nDigite a idade das pessoas -> Digite 0 para PARAR o programa\n\n");

    do
    {
        printf("%da pessoa: IDADE -> ", num);
        scanf("%d", &idade);
        num++;

        if (idade < 21){
            cont21 += 1;
        }
        else if (idade > 50){
            cont50 += 1;
        }

    } while (idade != 0);
    
    printf("\nTOTAL DE %d PESSOAS.", num-2);
    printf("\n%d PESSOAS COM MENOS DE 21 ANOS.", cont21-1);
    printf("\n%d PESSOAS COM MAIS DE 50 ANOS.\n\n", cont50);

    system ("PAUSE");
    return 0;
}

//NOME: DAVI KALEL ANDRADE TEIXEIRA