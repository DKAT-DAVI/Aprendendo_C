/*5. Faça um programa que leia um número entre 0 e 10, e escreva este número por extenso. Use o comando switch.*/

int number(int num)
{
    switch (num)
    {
    case 0:
        printf("\t0 -> ZERO");
        break;
    case 1:
        printf("\t1 -> ONE");
        break;
    case 2:
        printf("\t2 -> TWO");
        break;
    case 3:
        printf("\t3 -> THREE");
        break;
    case 4:
        printf("\t4 -> FOUR");
        break;
    case 5:
        printf("\t5 -> FIVE");
        break;
    case 6:
        printf("\t6 -> SIX");
        break;
    case 7:
        printf("\t7 -> SEVEN");
        break;
    case 8:
        printf("\t8 -> EIGHT");
        break;
    case 9:
        printf("\t9 -> NINE");
        break;
    case 10:
        printf("\t10 -> TEN");
        break;
    }

    return 0;
}

int error(int number)
{
    while (number > 10 || number < 0)
    {
        printf("\nERROR!  ERROR!  ERROR!  ERROR!  ERROR!\n");
       
        printf("\nTYPE ONLY NUMBERS BETWEEN 0 AND 10!");
        printf("\nType a number between 0 and 10: ");
        scanf("%d", &number);
    }
        return 0;
}

int main()
{
    int a;

    printf("Type a number between 0 and 10: ");
    scanf("%d", &a);

    error(a);

    number(a);

    return 0;
}

//NOME: DAVI KALEL ANDRADE TEIXEIRA