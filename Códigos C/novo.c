#include <stdio.h>

int main()
{
    float nota1, nota2, media;

    printf("\nDigite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    media = (nota1 + nota2)/2;
    printf("Media final: %.1f\n", media);

    system("PAUSE");
    return 0;
}