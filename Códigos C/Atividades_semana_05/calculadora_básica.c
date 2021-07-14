#include <stdio.h>
#include <conio.h>

float soma(float x, float y)
{   
    printf("%.1f", x + y);
    return 0;
}

float sub(float x, float y)
{   
    printf("%.1f", x - y);
    return 0;
}

float mult(float x, float y)
{   
    printf("%.1f", x * y);
    return 0;
}

float div(float x, float y)
{   
    printf("%.1f", x / y);
    return 0;
}

int main()
{
    float a, b;
    char oper = 'a';
    int pergunta = 1;

    system("color 1");

    printf("\n==== CALCULADORA DE 2 NUMEROS ====\n");
    printf("|                                |\n");
    printf("|   FAZER CALCULO        ->  1   |\n");
    printf("|   SAIR DA CALCULADORA  ->  2   |\n");
    printf("|                                |\n");
    printf("==================================\n");

    printf("\nCALCULAR OU SAIR? ");
    scanf("%d", &pergunta);
    
    system("cls");

    while(pergunta > 2 || pergunta < 1){
            printf("OPCAO INVALIDA, TENTE NOVAMENTE!");
            printf("\n\n================================\n");
            printf("|                                |\n");
            printf("|   FAZER CALCULO        ->  1   |\n");
            printf("|   SAIR DA CALCULADORA  ->  2   |\n");
            printf("|                                |\n");
            printf("==================================\n");
            printf("\n\nCALCULAR OU SAIR? ");
            scanf("%d", &pergunta);
    }

    while(pergunta == 1){

        printf("\n===== CALCULADORA DE 2 NUMEROS =====\n");
        printf("|      PARA SOMAR       ->  +      |\n");
        printf("|      PARA SUBTRAIR    ->  -      |\n");
        printf("|      PARA MULTIPLICAR ->  *      |\n");
        printf("|      PARA DIVIDIR     ->  /      |\n");
        printf("====================================\n\n");
        
        printf("DIGITE O PRIMEIRO NUMERO: ");
        scanf("%f", &a);
        
        printf("\nDIGITE A OPERACAO: ");
        scanf("%s", &oper);
        while(oper != '+' && oper != '-' && oper != '*' && oper != '/'){
            printf("\nOPERACAO INVALIDA, TENTE NOVAMENTE!");
            printf("\nDIGITE A OPERACAO: ");
            scanf("%s", &oper);
        }

        printf("\nDIGITE O SEGUNDO NUMERO: ");
        scanf("%f", &b); 

        if(oper == '+')
        {
            printf("\nRESULTADO: ");
            soma(a,b);
        }
        else if(oper == '-')
        {
            printf("\nRESULTADO: ");
            sub(a,b);
        }
        else if(oper == '*')
        {
            printf("\nRESULTADO: ");
            mult(a,b);
        }
        else if(oper == '/')
        {
            printf("\nRESULTADO: ");
            div(a,b);
        }

        printf("\n\nCALCULAR OUTRO NUMERO OU SAIR? ");
        scanf("%d", &pergunta);

        system("cls");
    }
    system("PAUSE");
    return 0;
}