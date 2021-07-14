#include <stdio.h>
#include <locale.h>

int pular()
{
    printf("\n\n");
    return 0;
}

int mult (float a, float b, float c)
{
    printf("%f", a*b*c);
    return 0;
}

int square (int x)
{
    printf("O quadrado de %d e: %d", x, x*x);
    return 0;
}

int msg()
{
    printf("Ola, tudo bem? ");
    return 0;
}

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int num;

    printf("Digite um número: ");
    scanf("%d", &num);
    pular();

    square(num);
    pular();
    msg();

    pular();

    return 0;
}