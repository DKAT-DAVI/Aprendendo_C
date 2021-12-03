/*10. Faça um Programa que peça a temperatura em graus Celsius, transforme e mostre em graus Fahrenheit.*/

#include <stdio.h>
#include <windows.h>

void questao_2() //Função questão 2
{
    int celsius, fahrenheit; //Variáveis para receber as temperaturas

    printf("\nFaca um Programa que peca a temperatura em graus Celsius,\ntransforme e mostre em graus Fahrenheit.");//Enunciado da questão
    Sleep(800);

    printf("\n\nInsira uma temperatura em graus Celsius: ");
    scanf("%d", &celsius); //Lendo temperatura em Celsius
    Sleep(800);

    fahrenheit = (celsius*1.8)+32; //Convertendo Celsius para Fahrenheit

    printf("%d graus Celsius e igual a %d graus Fahrenheit.\n\n", celsius, fahrenheit); //Exibindo mensagem na tela
    
    return 0;
}

int main(void)
{
    questao_2();

    return 0;
}