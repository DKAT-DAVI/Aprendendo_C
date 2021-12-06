/*Faca um programa que peca 10 numeros inteiros, calcule e mostre a quantidade de numeros pares e a quantidade de numeros impares.*/

#include <stdio.h> 
#include <windows.h>

void questao_7() //Função da questão 7             
{
    int num[10]; //Vetor para receber os números
    int paridade[2] = {0,0}; //Vetor pra receber a quatidade de pares e de ímpares
    int i; //Contador para o for
    
    //Enunciado da questão
    printf("\nFaca um programa que peca 10 numeros inteiros, calcule e mostre\na quantidade de numeros pares e a quantidade de numeros impares.\n");
    Sleep(800);

    for (i=0; i<10; i++) //for para ler os 10 números
    {
        printf("\nDigite o %do numero: ", i+1);
        scanf("%d", &num[i]); //Lendo os 10 números

        //Se o número digitado for par paridade[0] soma 1
        if (num[i]%2 == 0){ 
            paridade[0]++;
        }
        //Se o número digitado for ímpar paridade[1] soma 1
        else if (num[i]%2 == 1)
        {
            paridade[1]++;
        }
    }

    //Exibindo os números digitados
    Sleep(1000);
    printf("\nVoce digitou os numeros: ");
    
    for (i=0; i<10; i++)
    {
        printf("%d ", num[i]);
    }

    //Exibindo a quantidade de números pares
    Sleep(900);
    printf("\nVoce digitou %d numeros PARES.", paridade[0]);

    //Exibindo a quantidade de números ímpares
    Sleep(900);
    printf("\nE digitou %d numeros IMPARES.\n", paridade[1]);

    return 0; 
}
///////////////////////////////////////////////////////////////////////////////

int main()
{
    questao_7(); //Chamar a função dentro do int main

    return 0;
}
