/*Implemente um programa que leia o código do item pedido, a quantidade e calcule o valor a ser pago por aquele lanche. O cardápio de uma lanchonete é o seguinte:
        =========================================
        |       ITENS     |  CÓDIGO |   PREÇO   |
        | CACHORRO QUENTE |   100   |  R$ 1,20  |
        |     COXIHA      |   101   |  R$ 1,30  |
        |   COXINHA COM   |   102   |  R$ 1,50  |
        |    CATUPIRY     |         |           |
        |   REFRIGERANTE  |   103   |  R$ 1,20  |
        |   SUCO NATURAL  |   104   |  R$ 1,30  |
        =========================================*/

#include <stdio.h>
#include <stdlib.h>

float value(int cod, int quant)
{
    switch (cod)
    {
    case 100:
        printf("Voce vai pagar R$%.2f em %d cachorro(s) quente(s)", quant * 1.2, quant);
        break;
    
    case 101:
        printf("Voce vai pagar R$%.2f em %d coxinha(s)", quant * 1.30, quant);
        break;
    
    case 102:
        printf("Voce vai pagar R$%.2f em %d coxinha(s) com catupiry", quant * 1.5, quant);
        break;
    
    case 103:
        printf("Voce vai pagar R$%.2f em %d refrigerante(s)", quant * 1.2, quant);
        break;
    
    case 104:
        printf("Voce vai pagar R$%.2f em %d suco natural", quant * 1.3, quant);
        break;
    }

    return 0;
}

int main()
{
    int codigo, quantidade;

    printf("\n\n=============LANCHONETE DKAT=============");
    printf("\n|       ITENS     |  CODIGO |   PRECO   |");
    printf("\n| CACHORRO QUENTE |   100   |  R$ 1,20  |");
    printf("\n|     COXIHA      |   101   |  R$ 1,30  |");
    printf("\n|   COXINHA COM   |   102   |  R$ 1,50  |");
    printf("\n|    CATUPIRY     |         |           |");
    printf("\n|   REFRIGERANTE  |   103   |  R$ 1,20  |");
    printf("\n|   SUCO NATURAL  |   104   |  R$ 1,30  |");
    printf("\n=========================================\n");


    printf("Digite o codigo do produto que voce quer: ");
    scanf("%d", &codigo);
    while (codigo != 100 && codigo != 101 && codigo != 102 && codigo != 103 && codigo != 104)
        {
            printf("ERRO! CODIGO INDISPONIVEL, TENTE NOVAMENTE.");
            
            printf("\n\n=============LANCHONETE DKAT=============");
            printf("\n|       ITENS     |  CODIGO |   PRECO   |");
            printf("\n| CACHORRO QUENTE |   100   |  R$ 1,20  |");
            printf("\n|     COXIHA      |   101   |  R$ 1,30  |");
            printf("\n|   COXINHA COM   |   102   |  R$ 1,50  |");
            printf("\n|    CATUPIRY     |         |           |");
            printf("\n|   REFRIGERANTE  |   103   |  R$ 1,20  |");
            printf("\n|   SUCO NATURAL  |   104   |  R$ 1,30  |");
            printf("\n=========================================\n");

            printf("Digite o codigo do produto que voce quer: ");
            scanf("%d", &codigo);
        }

        printf("Digite a quantidade de produtos que voce quer: ");
        scanf("%d", &quantidade);

        value(codigo, quantidade);


    printf("\n\n");
    system ("PAUSE");
    return 0;
}

//NOME: DAVI KALEL ANDRADE TEIXEIRA 