/*4. Um funcionário irá receber um aumento de acordo com o seu plano de trabalho, de acordo com a tabela:
                        =======================
                        |  PLANO  |  AUMENTO  |
                        |    A    |    10%    |
                        |    B    |    15%    |
                        |    C    |    20%    |
                        =======================
Faça um programa que leia o plano de trabalho e o salário atual de um funcionário e calcula e imprime o seu novo salário. Use o comando switch.*/

#include <stdio.h>

int main()
{
    float salary;
    int flat;
    
    printf("=========================\n");
    printf("| WORK PLAN |  TYPE IT  |\n");
    printf("|     A     |     1     |\n");
    printf("|     B     |     2     |\n");
    printf("|     C     |     3     |\n");
    printf("=========================\n");    
    printf("Enter your work plan: ");
    scanf("%d", &flat);

     while (flat != 1 && flat != 2 && flat != 3)
    {
        printf("\nType only available work plans!\n\n");
        printf("=========================\n");
        printf("| WORK PLAN |  TYPE IT  |\n");
        printf("|     A     |     1     |\n");
        printf("|     B     |     2     |\n");
        printf("|     C     |     3     |\n");
        printf("=========================\n");    
        printf("Enter your work plan: ");
        scanf("%d", &flat);

    }

    printf("\nEnter your salary: ");
    scanf("%f", &salary);
    
    printf("\nPlan: %d", flat);

    printf("\nOld salary R$%.2f", salary);

    switch (flat)
    {
    case 1:
        printf("\nNew salary R$%.2f\n\n", salary + (salary / 100) * 10);
        break;
    case 2:
        printf("\nNew salary R$%.2f\n\n", salary + (salary / 100) * 15);        
        break;
    case 3:
        printf("\nNew salary R$%.2f\n\n", salary + (salary / 100) * 20);
        break;
    }
    
    return 0;
}

//NOME: DAVI KALEL ANDRADE TEIXEIRA