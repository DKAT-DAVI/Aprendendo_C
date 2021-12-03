//Incluindo as bibliotecas necessárias
#include <stdio.h>  //Biblioteca de entrada e saída de dados
#include <windows.h> //Biblioteca para o uso da função Sleep() para fazer uma pausa temporária no programa.

//FUNÇÕES UTILIZADAS NO CÓDIGO

void title() //Declarando função PARA O CABEÇALHO
{
    system("cls");
    Sleep(200); //Usando função Sleep() para fazer pequenas pausas no programa
    printf("\n======= INTRODUCAO A PROGRAMACAO ======="); //Cabeçalho
    printf("\n|         ATIVIDADE AVALIATIVA         |");
    printf("\n|                                      |");
    printf("\n|  Aluno: Davi Kalel Andrade Teixeira  |");
    printf("\n|     Turma: 1o ano - Informatica      |");
    printf("\n|           Data: 03/12/2021           |");
    printf("\n|          Escola: IFNMG - MOC         |");
    printf("\n|                                      |");
    printf("\n========================================\n");
    Sleep(1000);

    return 0; 
}

int escolher() //Função para exibir as questões
{

    //Cabeçalho e exibição dos enunciados
    printf("\n=================== ESCOLHA UMA QUESTAO ===================\n");
    
    Sleep(700); // Sleep para fazer pequena pausa durante a exibição
    printf("\n1. QUESTAO 1 ->");
    printf("\nFaca um Programa que mostre a mensagem 'Alo mundo' na tela.");

    Sleep(700);
    printf("\n\n2. QUESTAO 10 -> ");
    printf("\nFaca um Programa que peca a temperatura em graus Celsius,\ntransforme e mostre em graus Fahrenheit.");

    Sleep(700);
    printf("\n\n3. QUESTAO 27 ->");
    printf("\nFaca um Programa que leia tres numeros e mostre-os em ordem\ndecrescente.");

    Sleep(700);
    printf("\n\n4. QUESTAO 31 ->");
    printf("\nFaca um Programa que leia um numero e exiba o dia correspondente\nda semana. (1-Domingo, 2- Segunda, etc.), se digitar outro valor deve\naparecer valor invalido.");

    Sleep(700);
    printf("\n\n5. QUESTAO 40 ->");
    printf("\nFaca um Programa que peca um numero inteiro e determine se ele e\npar ou impar. Dica: utilize o operador modulo (resto da divisao).");

    Sleep(700);
    printf("\n\n6. QUESTAO 52 ->");
    printf("\nFaca um programa que imprima na tela os numeros de 1 a 20, um\nabaixo do outro. Depois modifique o programa para que ele mostre \nnumeros um ao lado do outro.");

    Sleep(700);
    printf("\n\n7. QUESTAO 60");
    printf("\nFaca um programa que peca 10 numeros inteiros, calcule e mostre\na quantidade de numeros pares e a quantidade de numeros impares.");

    Sleep(700);
    printf("\n\n8. QUESTAO 70");
    printf("\nFaca um programa que calcule e mostre a media aritmetica de N notas.");
    
    Sleep(700);
    printf("\n\n9. QUESTAO 85 ->");
    printf("\nFaca um programa que leia dez conjuntos de dois valores, o\nprimeiro representando o numero do aluno e o segundo representando a sua\naltura em centimetros. Encontre o aluno mais alto e o mais baixo. Mostre o\nnumero do aluno mais alto e o numero do aluno mais baixo, junto com suas\nalturas.");

    Sleep(700);
    printf("\n\n10. QUESTAO 98 ->");
    printf("\nDada uma sequencia de n numeros, imprimi-la na ordem inversa a da leitura.");

    Sleep(700);    
    return 0;
}

//Funções da execução das questões de 1 à 10

void questao_1() //Função questão 1
{
    //Enunciado da questão
    printf("\nFaca um Programa que mostre a mensagem 'Alo mundo' na tela.");
    Sleep(700);
    //Print do código na tela
    printf("\n\nAlo Mundo");
    return 0;
}

void questao_2() //Função questão 2
{
    int celsius, fahrenheit; //Variáveis para receber as temperaturas

    printf("\nFaca um Programa que peca a temperatura em graus Celsius,\ntransforme e mostre em graus Fahrenheit.");//Enunciado da questão
    Sleep(800);

    printf("\n\nInsira uma temperatura em graus Celsius: ");
    scanf("%d", &celsius); //Lendo temperatura em Celsius
    Sleep(800);

    fahrenheit = (celsius*1.8)+32; //Convertendo Celsius para Fahrenheit

    printf("%d graus Celsius e igual a %d graus Fahrenheit.\n\n", celsius, fahrenheit); //Exibindo mensagem na tela
    
    return 0;
}

int main(void) //Iniciando a função principal
{
    int escolha; //Variável para escolha da questão

    title(); //Chamando função do cabeçalho

    escolher(); //Chamando função de exibir questões

    printf("\n\nDIGITE O NUMERO DA QUESTAO PARA EXECUTAR: ");
    scanf("%d", &escolha); //Escolhendo a questão

    //Loop de erro para quando o usuário digitar uma questão indisponível
    while (escolha<1 || escolha>10){
        printf("\n\nescolha INVALIDA!");
        printf("\nDISPONIVEIS APENAS QUESTOES ENTRE 1 E 10");
        printf("\n\nDIGITE O NUMERO DA QUESTAO PARA EXECUTAR: ");
        scanf("%d", &escolha);
    }
    
    int decidir=escolha; //Variável para decidir a execução dentro do switch

    title();
    
    //Loop para executar as questões
    while (decidir != 0)
    {
        switch (escolha)
        {
        case 1:
            questao_1();
            Sleep(3000);
            break;
        case 2:
            questao_2();
            Sleep(3000);
            break;
        }
        //Menu de opções após a execução da questão
        printf("\n\n=================================================");
        printf("\n|      Digite 0 para FINALIZAR o programa.      |");
        printf("\n|       Digite 1 para REPETIR a questao.        |");
        printf("\n| Digite 2 para VOLTAR para o menu de questoes. |");
        printf("\n=================================================");
        printf("\nDigite sua escolha: ");
        scanf("%d", &decidir);
        //Loop de erro para quando o usuário digitar uma opção indisponível
        while (decidir<0 || decidir>2){
            printf("\n\nescolha INVALIDA!");
            printf("\nDISPONIVEIS AS OPCOES DISPONIVEIS NO QUADRO ACIMA");
            printf("\n\nDigite sua escolha: ");
            scanf("%d", &decidir);
        }
        if (decidir == 2){ //Exibir o menu de questões novamente
            title(); //Chamando função do cabeçalho

            escolher(); //Chamando função de exibir questões

            printf("\n\nDIGITE O NUMERO DA QUESTAO PARA EXECUTAR: ");
            scanf("%d", &escolha); //Escolhendo a questão

            //Loop de erro para quando o usuário digitar uma questão indisponível
            while (escolha<1 || escolha>10){
                printf("\n\nescolha INVALIDA!");
                printf("\nDISPONIVEIS APENAS QUESTOES ENTRE 1 E 10");
                printf("\n\nDIGITE O NUMERO DA QUESTAO PARA EXECUTAR: ");
                scanf("%d", &escolha);
            }
            title(); //Chamando função title
        }
    }

    system("cls");
    printf("\nCreated by DKAT");
    Sleep(3000);
    system("cls");

    return 0; //Retornando 0
}
//NOME: DAVI KALEL ANDRADE TEIXEIRA