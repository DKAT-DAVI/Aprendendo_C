/*Questão 01 - Para doar sangue é necessário ter entre 18 e 67 anos. Faça um programa que pergunte a idade de uma pessoa e diga se ela pode doar sangue ou não. Use alguns dos operadores lógicos OU ||  e E && .*/
#include <stdio.h>

int main()
{
    int idade;

    printf("\n-=-=-=DOADOR DE SANGUE-=-=-=\n");

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    if (idade >= 18 && idade <= 67)
    {
        printf("Voce esta em idade apta para doar sangue.\n\n");
    }else if (idade < 18)
    {
        printf("Voce ainda e muito novo para doar sangue.\n\n");
    }else{
        printf("Voce ja passou da idade para doar sangue.\n\n");
    }

    system("PAUSE");
    return 0;
}
//NOME: DAVI KALEL ANDRADE TEIXEIRA