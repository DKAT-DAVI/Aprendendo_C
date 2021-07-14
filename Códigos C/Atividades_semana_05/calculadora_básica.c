#include <stdio.h>

float soma(float x, float y)
{   
    printf("%.1f", x + y);
    return 0;
}

int main()
{
    float a, b;
    char oper = 'a';
    int pergunta = 1;

    printf("\n==== CALCULADORA DE 2 NUMEROS ====\n");
    printf("|                                |\n");
    printf("|   FAZER CALCULO        ->  1   |\n");
    printf("|   SAIR DA CALCULADORA  ->  2   |\n");
    printf("|                                |\n");
    printf("==================================\n");

    printf("\nCALCULAR OU SAIR? ");
    scanf("%d", &pergunta);
    
    while(pergunta > 2 || pergunta < 1){
            printf("OPCAO INVALIDA, TENTE NOVAMENTE!");
            printf("\n\nCALCULAR OU SAIR? ");
            scanf("%d", &pergunta);
    }

    while(pergunta == 1){

        printf("\n====================================\n");
        printf("|      PARA SOMAR       ->  +      |\n");
        printf("|      PARA SUBTRAIR    ->  -      |\n");
        printf("|      PARA MULTIPLICAR ->  *      |\n");
        printf("|      PARA DIVIDIR     ->  /      |\n");
        printf("====================================\n\n");
        
        printf("DIGITE O PRIMEIRO NUMERO: ");
        scanf("%f", &a);
        
        printf("\nDIGITE A OPERACAO: ");
        scanf("%s", &oper);
        
        printf("\nDIGITE O SEGUNDO NUMERO: ");
        scanf("%f", &b);

        printf("\nRESULTADO: ");   

        if(oper == '+')
        {
            soma(a,b);
        }else
        {
            printf("\nOPERACAO INVALIDA, TENTE NOVAMENTE!");
        }

        printf("\n\nCALCULAR OUTRO NUMERO OU SAIR? ");
        scanf("%d", &pergunta);
    }
    return 0;
}