#include <stdio.h>

int main()
{
    int i;

    while (0 == 0){
        
        printf("Insira um numero inteiro de 1 a 5: ");
        scanf("%i", &i);

        switch (i) {
            case 1: //Caso o valor da variável seja 1
                printf("primeiro\n");
                break;
            case 2:
                printf("segundo\n");
                break;
            case 3:
                printf("terceiro\n");
                break;
            case 4:
                printf("quarto\n");
                break;
            case 5:
                printf("quinto\n");
                break;
            default: /*Caso a variavel nao esteja em nenhum desses casos execute esta linha*/
                printf("opcao invalida\n");
                break;
        }
    }
    system ("PAUSE");
    return 0;
}