/*Elabore uma função que receba três notas de um aluno como parâmetro e uma 
letra. Se a letra for ‘A’, a função deve calcular a média aritmética das notas
do aluno; se a letra for ‘P’, deverá calcular a média ponderada, com pesos 5,
3 e 2. Retorne a média calculada para o programa principal.*/
#include <stdio.h>

float meda(float a, float b, float c)
{
    printf("%.1f", (a + b + c) / 3);
    return 0;
}

float medp(float a, float b, float c)
{
    float resultado;
    resultado = ((a * 5) + (b * 3) + (c * 2)) / 10;
    printf("%.1f", resultado);
    return 0;
}

int main()
{
    float nota1, nota2, nota3;
    char pergunta = 'd';

    printf("\n\t====MEDIA DE TRES NOTAS====\n");
    printf("\n\tDigite a primeira nota: ");
    scanf("%f", &nota1);
        
    printf("\n\tDigite a segunda nota: ");
    scanf("%f", &nota2);
        
    printf("\n\tDigite a terceira nota: ");
    scanf("%f", &nota3);

    printf("\n\t================================\n"); 
    printf("\t|                              |\n");
    printf("\t|   MEDIA ARITIMETICA  ->  A   |\n");
    printf("\t|   MEDIA PONDERADA    ->  P   |\n");
    printf("\t|                              |\n");
    printf("\t================================\n");

    printf("\n\tARITIMETICA OU PONDERADA? ");
    scanf("%s", &pergunta);

    if ((pergunta == 'A') || (pergunta == 'a'))
    {
        printf("\n\tA MEDIA ARITIMETICA E: ");
        meda(nota1, nota2, nota3);
    }
    else if((pergunta == 'P') || (pergunta == 'p'))
    {
    printf("\n\tA MEDIA PONDERADA E: ");
    medp(nota1, nota2, nota3);
    }

    printf("\n")
    return 0;
}
//NOME: DAVI KALEL ANDRADE TEIXEIRA