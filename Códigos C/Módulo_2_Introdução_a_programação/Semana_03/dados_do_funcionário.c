/*4. Crie uma estrutura (struct) para armazenar os dados abaixo:
• nome (até 50 caracteres),
•função (até 50 caracteres),
•idade,
•Valor dos três últimos salários.
Em seguida, crie um programa que lê os dados de n funcionários usando
a estrutura criada.*/

#include <stdio.h> //Incluindo a biblioteca necessária

struct dados //Estrutura para receber os dados
{
    char nome[50]; //nome do funcionário
    char funcao[50]; //função do funcionário
    int idade;  //idade do funcionário
    float salarios[3];  //salários do funcionário
};

int main(void) //Iniciando a função principal
{
    char n[3] = "s";
    struct dados funcionario; //Declaração da variável tipo struct dados
    
    while (n == "S" && n == "s")
    {
    
    printf("Preencher formulário?|S/N| ");
    gets(n);

    if (n == "N" && n == "n")
    {
        break;
    }

    printf("\n==== FORMULARIO DO FUNCIONARIO ====\n");
    
    printf("NOME: ");
    gets(funcionario.nome); //Lendo o nome do funcionário

    printf("FUNCAO: ");
    gets(funcionario.funcao); //Lendo função do funcionário

    printf("IDADE: ");
    scanf("%d", &funcionario.idade); //Lendo a idade do Funcionário

    printf("******* 3 ULTIMOS SALARIOS *******\n");
    printf("AGOSTO R$");
    scanf("%f", &funcionario.salarios[0]); //Lendo o primeiro salário

    printf("SETEMBRO: R$");
    scanf("%f", &funcionario.salarios[1]); //Lendo o segundo salário
    
    printf("OUTUBRO: R$");
    scanf("%f", &funcionario.salarios[2]); //Lendo o terceiro salário

    printf("===================================\n\n");

    system ("PAUSE");
    system ("cls"); // Limpar o console

    printf("\nFORMULARIO PREENCHIDO COM SUCESSO!\n");

    //Exibindo a fincha com os dados do funcionário formatado
    printf("\n======= FICHA DO FUNCIONARIO =======\n"); 
    printf("NOME: %s\n", funcionario.nome);
    printf("FUNCAO: %s\n", funcionario.funcao);
    printf("IDADE: %d ANOS\n", funcionario.idade);
    printf("******** 3 ULTIMOS SALARIOS ********\n");
    printf("AGOSTO: R$%.2f\n", funcionario.salarios[0]);
    printf("SETEMBRO: R$%.2f\n", funcionario.salarios[1]);
    printf("OUTUBRO: R$%.2f\n", funcionario.salarios[2]);
    printf("====================================\n\n");
    }

    return 0;
}

// NOME: DAVI KALEL ANDRADE TEIXEIRA