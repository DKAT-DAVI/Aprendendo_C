/*Questão 05 - Fazer um programa que gere a letra inicial do seu nome como saída.*/
#include <stdio.h>

int main ()
{
    char a [15]= "***********", b [15]= "****", c [15]= "    ", d [15]= "************";
    printf("\n%s\n%s\n", a, d);
    printf("%s%s %s\n", b, c, b);
    printf("%s%s  %s\n", b, c, b);
    printf("%s%s   %s\n", b, c, b);
    printf("%s%s    %s\n", b, c, b);
    printf("%s%s   %s\n", b, c, b);
    printf("%s%s  %s\n", b, c, b);
    printf("%s%s %s\n", b, c, b);
    printf("%s\n%s\n\n", d, a);
    
    system("pause");
    return 0;
}
//NOME: DAVI KALEL ANDRADE TEIXEIRA