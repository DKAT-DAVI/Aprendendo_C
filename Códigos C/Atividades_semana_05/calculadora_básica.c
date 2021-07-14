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

    printf("\n\t==== CALCULADORA DE 2 NUMEROS ====\n");
    printf("\t|                                |\n");
    printf("\t|   FAZER CALCULO        ->  1   |\n");
    printf("\t|   SAIR DA CALCULADORA  ->  2   |\n");
    printf("\t|                                |\n");
    printf("\t==================================\n");

    printf("\n\tCALCULAR OU SAIR? ");
    scanf("%d", &pergunta);
    
    system("cls");

    while(pergunta > 2 || pergunta < 1){
            printf("\tOPCAO INVALIDA, TENTE NOVAMENTE!");
            printf("\n\n\t================================\n");
            printf("\t|                                |\n");
            printf("\t|   FAZER CALCULO        ->  1   |\n");
            printf("\t|   SAIR DA CALCULADORA  ->  2   |\n");
            printf("\t|                                |\n");
            printf("\t==================================\n");
            printf("\n\n\tCALCULAR OU SAIR? ");
            scanf("%d", &pergunta);
    }

    while(pergunta == 1){

        printf("\n\t===== CALCULADORA DE 2 NUMEROS =====\n");
        printf("\t|      PARA SOMAR       ->  +      |\n");
        printf("\t|      PARA SUBTRAIR    ->  -      |\n");
        printf("\t|      PARA MULTIPLICAR ->  *      |\n");
        printf("\t|      PARA DIVIDIR     ->  /      |\n");
        printf("\t====================================\n\n");
        
        printf("\tDIGITE O PRIMEIRO NUMERO: ");
        scanf("%f", &a);
        
        printf("\n\tDIGITE A OPERACAO: ");
        scanf("%s", &oper);
        while(oper != '+' && oper != '-' && oper != '*' && oper != '/'){
            printf("\n\tOPERACAO INVALIDA, TENTE NOVAMENTE!");
            printf("\n\n\tDIGITE A OPERACAO: ");
            scanf("%s", &oper);
        }

        printf("\n\tDIGITE O SEGUNDO NUMERO: ");
        scanf("%f", &b); 

        if(oper == '+')
        {
            printf("\n\tRESULTADO: ");
            soma(a,b);
        }
        else if(oper == '-')
        {
            printf("\n\tRESULTADO: ");
            sub(a,b);
        }
        else if(oper == '*')
        {
            printf("\n\tRESULTADO: ");
            mult(a,b);
        }
        else if(oper == '/')
        {
            printf("\n\tRESULTADO: ");
            div(a,b);
        }

        printf("\n\n\tCALCULAR OUTRO NUMERO OU SAIR? ");
        scanf("%d", &pergunta);

        system("cls");
    }
    //system("PAUSE");
    return 0;
}