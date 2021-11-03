/*3. Crie um programa que receba um número de 1 a 7 e logo em seguida informe
qual o dia da semana é referente a opção digitada pelo usuário.*/

#include <stdio.h>

int days(int a)
{
    switch (a)
    {
    case 1:
        printf("DAY 1 is Sunday!");
        break;
    case 2:
        printf("DAY 2 is Monday!");
        break;
    case 3:
        printf("DAY 3 is Tuesday!");
        break;
    case 4:
        printf("DAY 4 is Wednesday!");
        break;
    case 5:
        printf("DAY 5 is Thursday!");
        break;
    case 6:
        printf("DAY 6 is Friday!");
        break;
    case 7:
        printf("DAY 7 is Saturday!");
        break;
    }
    return 0;
}

int main()
{
    int num;

    while(1)
    {
    printf("Type a number between 1 and 7: ");
    scanf("%d", &num);

    while(num < 1 || num > 7){
        printf("Enter only numbers between 1 and 7!!");
        scanf("%d", &num);
    }
    days(num);
    printf("\n\n");

    }

    system("PAUSE");
    return 0;
}