#include <stdio.h>
#include <locale.h>

int pular()
{
    printf("\n\n");
    return 0;
}

int mult (float a, float b, float c)
{
    printf("%.2f", a*b*c);
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
    
    float num2, num3, num4;
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);
    pular();

    square(num);
    pular();
    msg();

    pular();
    
    printf("Digite um outro numero: ");
    scanf("%f", &num2);
    
    printf("Digite um outro numero: ");
    scanf("%f", &num3);
    
    printf("Digite um outro numero: ");
    scanf("%f", &num4);

    printf("O produto entre esses tres numeros e: ");
    mult(num2, num3, num4);
    pular();

    system("PAUSE");
    return 0;
}