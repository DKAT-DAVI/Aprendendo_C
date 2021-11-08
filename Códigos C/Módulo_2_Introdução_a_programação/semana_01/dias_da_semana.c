/*3. Crie um programa que receba um número de 1 a 7 e logo em seguida informe
qual o dia da semana é referente a opção digitada pelo usuário.*/

#include <stdio.h>

int days(int a)
{
    switch (a)
    {
    case 1:
        printf("DIA 1 e DOMINGO!");
        break;
    case 2:
        printf("DIA 2 e SEGUNDA!");
        break;
    case 3:
        printf("DIA 3 e TERCA!");
        break;
    case 4:
        printf("DIA 4 e QUARTA!");
        break;
    case 5:
        printf("DIA 5 e QUINTA!");
        break;
    case 6:
        printf("DIA 6 e SEXTA!");
        break;
    case 7:
        printf("DIA 7 e SABADO!");
        break;
    }
    return 0;
}

int main()
{
    int num;

    printf("Digite um numero entre 1 e 7: ");
    scanf("%d", &num);

    while(num < 1 || num > 7){
        printf("DIGITE APENAS NUMEROS ENTRE 1 E 7!!\n\n");
        printf("Digite um numero entre 1 e 7: ");
        scanf("%d", &num);
    }
    days(num);
    printf("\n\n");

    system("PAUSE");
    return 0;
}