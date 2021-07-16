/*Faça um programa que execute as 4 operações básicas (Soma, Subtração, Divisão e Multiplicação) simulando uma calculadora. O usuário deve digitar os 2 valores e selecionar a operação desejada. O programa deve mostrar o resultado da operação.*/
#include <stdio.h>
#include <conio.h>
#include <unistd.h>


float soma(float x, float y) //Função para somar
{   
    printf("%.1f", x + y);
    return 0;
}

float sub(float x, float y) //Função para subtrair
{   
    printf("%.1f", x - y);
    return 0;
}

float mult(float x, float y) //Função para multiplicar
{   
    printf("%.1f", x * y);
    return 0;
}

float div(float x, float y) //Função para dividir
{   
    printf("%.1f", x / y);
    return 0;
}

int main() //Função principal
{
    //Declaração de variáveis
    
    //Variáveis 'a' e 'b', recebem os dois numeros para fazer os cálculos
    float a, b; 
    
    //Variável 'a' recebe o operador aritimético
    char oper = 'a'; 
    
    //Variável 'pergunta' recebe a resposta de fazer cálculo ou sair da calculadora
    char pergunta = 'b'; 

    //Cabeçalho de entrada da calculadora
    printf("\n\t==== CALCULADORA DE 2 NUMEROS ====\n");
    printf("\t|                                |\n");
    printf("\t|   FAZER CALCULO        ->  1   |\n");
    printf("\t|   SAIR DA CALCULADORA  ->  2   |\n");
    printf("\t|                                |\n");
    printf("\t==================================\n");

    //Opção pra calcular ou sair da calculadora
    printf("\n\tCALCULAR OU SAIR? ");
    scanf("%s", &pergunta);
    
    //Loop de erro para enquanto for digitado algo diferente de sair(2) ou calcular(1)
    while(pergunta != '2' && pergunta != '1'){
            system("cls"); //Limpar a tela para mostrar a mensagem de erro
            system("color 4"); //Colorir de vermelho a mensagem de erro
            printf("\n\t\aOPCAO INVALIDA, TENTE NOVAMENTE!");
            printf("\n\n\t==================================\n"); 
            printf("\t|                                |\n");
            printf("\t|   FAZER CALCULO        ->  1   |\n");
            printf("\t|   SAIR DA CALCULADORA  ->  2   |\n");
            printf("\t|                                |\n");
            printf("\t==================================\n");
            printf("\n\n\tCALCULAR OU SAIR? ");
            scanf("%s", &pergunta);
    }

    system("cls"); //Limpar a tela após a mensagem de erro
    system("color 7"); //Retornar a cor do programa

    while(pergunta == '1'){ //Loop principal da calculadora

        //Cabeçalho da calculadora
        printf("\n\t===== CALCULADORA DE 2 NUMEROS =====\n");
        printf("\t|      PARA SOMAR       ->  +      |\n");
        printf("\t|      PARA SUBTRAIR    ->  -      |\n");
        printf("\t|      PARA MULTIPLICAR ->  *      |\n");
        printf("\t|      PARA DIVIDIR     ->  /      |\n");
        printf("\t====================================\n\n");
        
        // Entrada com o primeiro número para o cálculo
        printf("\tDIGITE O PRIMEIRO NUMERO: ");
        scanf("%f", &a);
        
        // Entrada com o operador para fazer o cálculo
        printf("\n\tDIGITE O OPERADOR: ");
        scanf("%s", &oper);
        
        // Loop de erro para enquanto o usuário digitar algo diferente dos 4 operadores disponíveis
        while(oper != '+' && oper != '-' && oper != '*' && oper != '/'){
            system("cls"); //Limpar a tela para mostrar a mensagem de erro
            system("color 4"); //Colorir de vermelho a mensagem de erro
            printf("\n\tOPERACAO INVALIDA, TENTE NOVAMENTE!");
            printf("\n\t====================================\n");
            printf("\t|      PARA SOMAR       ->  +      |\n");
            printf("\t|      PARA SUBTRAIR    ->  -      |\n");
            printf("\t|      PARA MULTIPLICAR ->  *      |\n");
            printf("\t|      PARA DIVIDIR     ->  /      |\n");
            printf("\t====================================\n\n");
            printf("\n\n\tDIGITE A OPERACAO: ");
            scanf("%s", &oper);
        }

        system("color 7");//Retornar a cor original do programa

        //Entrada com o segundo número
        printf("\n\tDIGITE O SEGUNDO NUMERO: ");
        scanf("%f", &b); 

        //Condicionais dos operadores
        if(oper == '+') //Se o usuário digitar '+' acionar a função de soma
        {
            printf("\n\tRESULTADO: ");
            soma(a,b);
        }
        else if(oper == '-') //Se digitar '-' acionar a função de subtração
        {
            printf("\n\tRESULTADO: ");
            sub(a,b);
        }
        else if(oper == '*') //Se digitar '*' acionar a função de multiplicação
        {
            printf("\n\tRESULTADO: ");
            mult(a,b);
        }
        else if(oper == '/') //Se digitar '/' acionar a função de divisão
        {
            printf("\n\tRESULTADO: ");
            div(a,b);
        }

        // O usuário decidir se quer calcular outro número ou sair
        printf("\n\n\tCALCULAR OUTRO NUMERO OU SAIR? ");
        scanf("%s", &pergunta);

        //Loop de erro para enquanto for digitado algo diferente de sair(2) ou calcular(1)
        while(pergunta != '1' && pergunta != '2'){
        system("cls"); //Limpar a tela e exibir o erro
        system("color 4"); //Colorir o programa para mostrar a mensagem de erro
        printf("\tOPCAO INVALIDA, TENTE NOVAMENTE!");
        printf("\n\n\t==================================\n"); 
        printf("\t|                                |\n");
        printf("\t|   FAZER CALCULO        ->  1   |\n");
        printf("\t|   SAIR DA CALCULADORA  ->  2   |\n");
        printf("\t|                                |\n");
        printf("\t==================================\n");
        printf("\n\tCALCULAR OU SAIR? ");
        scanf("%s", &pergunta);
        }

        system("cls"); //Limpar a mensagem de erro e continuar o programa
        system("color 7"); //Retornar o programa a cor inicial
        system("cls");
    }

    system("color 1");
    printf("CREATED BY: DKAT\n\n");
    sleep(2);
    system("cls");
    return 0;
}
// NOME: DAVI KALEL ANDRADE TEIXEIRA