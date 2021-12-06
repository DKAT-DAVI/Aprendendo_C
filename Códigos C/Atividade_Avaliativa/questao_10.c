/*Dada uma sequencia de n numeros, imprimi-la na ordem inversa a da leitura.*/

#include <stdio.h>
#define MAX 100
#include <windows.h>

void questao_10() //Função da questão 10
{
    int n, i, v[MAX]; //Variáveis usadas

    //Enunciado da questão
    printf("\nDada uma sequencia de n numeros, imprimi-la na ordem inversa a da leitura.\n\n");

    Sleep(800);
    printf("Digite o comprimento da sequencia: ");
    scanf("%d", &n); //Lendo o comprimento da sequência

    Sleep(800);
    for (i = 0; i < n; i++){
        printf("\nDigite o %do numero: ", i+1);
        scanf("%d", &v[i]); //Lendo os números
    }
    
    printf("\n=== SEQUENCIA INVERSA ===\n -> ");

    for (i = n-1; i >= 0; i--){ //Exibindo a sequência invertida
        printf("%d ", v[i]);
        Sleep(800);
    }
    printf("\n=========================");

    return 0;
}

int main(void)
{
    questao_10();

    return 0;
}