/*Faca um Programa que leia um numero e exiba o dia correspondente da semana. (1-Domingo, 2- Segunda, etc.), se digitar outro valor deve aparecer valor invalido.*/  

#include <stdio.h>
#include <windows.h>

void questao_4() //FUnção da questão 4
{
    int num; //Variável para receber o número do dia

    //Enunciado da questão
    printf("\nFaca um Programa que leia um numero e exiba o dia correspondente\nda semana. (1-Domingo, 2- Segunda, etc.), se digitar outro valor deve\naparecer valor invalido.\n");

    Sleep(800);
    printf("\nDigite um numero entre 1 e 7: ");
    scanf("%d", &num); //Lendo o número do dia

    //Loop de erro
    while(num < 1 || num > 7){
        Sleep(800);
        printf("\nVALOR INVALIDO!");
        Sleep(800);
        printf("\nDIGITE APENAS NUMEROS ENTRE 1 E 7!!\n");
        Sleep(800);
        printf("\nDigite um numero entre 1 e 7: ");
        scanf("%d", &num);
    }

    Sleep(800);
    //Switch para decidir e exibir os dias        
        switch (num)
    {
    case 1:
        printf("DIA 1 e DOMINGO!");
        break;
    case 2:
        printf("DIA 2 e SEGUNDA!");
        break;
    case 3:
        printf("DIA 3 e TERCA!");
        break;
    case 4:
        printf("DIA 4 e QUARTA!");
        break;
    case 5:
        printf("DIA 5 e QUINTA!");
        break;
    case 6:
        printf("DIA 6 e SEXTA!");
        break;
    case 7:
        printf("DIA 7 e SABADO!");
        break;
    }
    return 0;
}


int main(void)
{
    questao_4();

    return 0;
}