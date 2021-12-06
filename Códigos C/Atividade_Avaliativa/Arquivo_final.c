//Incluindo as bibliotecas necessárias
#include <stdio.h>  //Biblioteca de entrada e saída de dados
#include <windows.h> //Biblioteca para o uso da função Sleep() para fazer uma pausa temporária no programa.
#define MAX 100

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


void questao_3() //Função questão 3
{
    int vetor[3]; //Vetor para recevetorer os 3 
    int i, j, aux;

    //Enunciado da questão
    printf("\nFaca um Programa que leia tres numeros e mostre-os em ordem decrescente.\n");

    Sleep(800);
    for (i=0; i<3; i++) //For para preencher o vetor
    {
        printf("\nDigite o %do numero: ", i+1);
        scanf("%d", &vetor[i]); //Lendo o número
    }

    //Exibindo vetor
    printf("\n========= NUMEROS =========\n");
    
    for (i=0; i<3; i++)
    {
        printf("    %d\t", vetor[i]);
        Sleep(800);
    }
    printf("\n===========================\n");
    Sleep(800);
    
    for (i=0; i<3; i++){  //Laços for para ordenação em ordem decrescente do vetor
        for (j=i+1; j<3; j++){
            if (vetor[j] > vetor[i])
            {
                aux = vetor[j];
                vetor[j] = vetor[i];
                vetor[i] = aux;
            }

        }
    }

    //Exibindo vetor em ordem decrescente
    printf("\n=== NUMEROS DECRESCENTES ===\n");
    Sleep(800);
    
    for (i=0; i<3; i++)
    {
        printf("    %d\t", vetor[i]);
        Sleep(800);
    }
    printf("\n============================\n");

    return 0;
}

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


void questao_5() //Função questão 5
{
    int num; //Variável para ler o número

    //Enunciado da questão
    printf("\nFaca um Programa que peca um numero inteiro e determine se ele e\npar ou impar. Dica: utilize o operador modulo (resto da divisao).");

    Sleep(800);
    printf("\n\nDigite um numero: ");
    scanf("%d", &num); //Lendo o número

    Sleep(800);
    if (num % 2 == 0){ //Verificando se é par
        printf("\nO numero %d e PAR.", num); //Exibindo se for par
    }
    else if (num % 2 == 1) //Verificando se é ímpar
    {
        printf("\nO numero %d e IMPAR.", num); //Exibindo se for ímpar
    }

    return 0;
}


void questao_6() //Função da questão 6
{
    int vetor[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 , 16, 17, 18, 19, 20}; //Vetor com os números de 1 à 20
    int i; //Contador para o for

    //Enunciado da questão
    printf("\nFaca um programa que imprima na tela os numeros de 1 a 20, um\nabaixo do outro. Depois modifique o programa para que ele mostre \nnumeros um ao lado do outro.");

    Sleep(800);
    printf("\n\n=== NUMEROS ABAIXO ===\n"); //Exibindo números abaixo

    for (i=0; i<20; i++)
    {
        printf("\t%d\n", vetor[i]);
        Sleep(800);
    }
    
    printf("======================\n");

    //Exibindo números ao lado
    Sleep(800);
    printf("\n================= NUMEROS AO LADO ================\n");

    for (i=0; i<20; i++)
    {
        printf("%d ", vetor[i]);
        Sleep(800);
    }
    
    printf("\n==================================================");


    return 0;
}


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


void questao_8() //Função da questão 8
{
    float notas, soma=0; //Variáveis notas e soma/média
    int opcao=1, num=1; //Variáveis auxiliares

    //Enunciado da questão
    printf("\nFaca um programa que calcule e mostre a media aritmetica de N notas.\n");

    //Loop de n notas
    while (opcao != 0)
    {
        printf("\nDigite a %da nota: ", num);
        scanf("%f", &notas); //Lendo as notas do aluno

        num++;

        soma += notas; //Somando as notas

        printf("\n=================================");
        printf("\n|Adicionar outra notas: Digite 1|");
        printf("\n|   Calcular a media: Digite 0  |");
        printf("\n=================================");
        printf("\nDigite sua opcao: ");
        scanf("%d", &opcao); //Opção de n notas

    }

    //Calculando a média
    Sleep(800);
    printf("\nA media das notas foi %.2f", soma/(num-1));

    return 0;
}


void questao_9() //Função da questão 9
{
    int aluno[10][2]; //Matriz recebendo número e altura
    int i, j; //contadores
    int maior = 0; //aluno maior
    int num_maior = 0; //número do aluno maior
    int menor = 999999; //altura do aluno menor
    int num_menor = 0; //número do aluno menor

    //Enunciado da questão
    printf("\nFaca um programa que leia dez conjuntos de dois valores, o\nprimeiro representando o numero do aluno e o segundo representando a sua\naltura em centimetros. Encontre o aluno mais alto e o mais baixo. Mostre o\nnumero do aluno mais alto e o numero do aluno mais baixo, junto com suas\nalturas.\n\n");

    Sleep(800);
    for (i=0; i<10; i++){ //For para atribuir valor à matriz
        for(j=0; j<1; j++){
            
            printf("%do ALUNO ->", i+1);
            
            printf("\nNumero do aluno: "); 
            scanf("%d", &aluno[i][j]); //Lendo número do aluno
            
            printf("Altura do aluno (em cm): ");
            scanf("%d", &aluno[i][j+1]); //Lendo altura do aluno

            if (aluno[i][j+1] > maior) //Verificando altura maior
            {
                maior = aluno[i][j+1];
                num_maior = aluno[i][j];
            }
            if (aluno[i][j+1] < menor) //Verificando altura menor
            {
                menor = aluno[i][j+1];
                num_menor = aluno[i][j];
            }

            printf("\n");
        }
    }

    Sleep(1000);
    
    //Exibindo altura e número 
    printf("O maior aluno e o aluno %d com %d cm de altura.", num_maior, maior);

    Sleep(800);
    printf("\nO menor aluno e o aluno %d com %d cm de altura.", num_menor, menor);

    return 0;
}


void questao_10() //Função da questão 10
{
    int n, i, v[MAX]; //Variáveis usadas

    //Enunciado da questão
    printf("\nDada uma sequencia de n numeros, imprimi-la na ordem inversa a da leitura.\n\n");

    Sleep(800);
    printf("Digite o comprimento da sequencia: ");
    scanf("%d", &n); //Lendo o comprimento da sequência

    Sleep(800);
    for (i = 0; i < n; i++){
        printf("\nDigite o %do numero: ", i+1);
        scanf("%d", &v[i]); //Lendo os números
    }
    
    printf("\n=== SEQUENCIA INVERSA ===\n -> ");

    for (i = n-1; i >= 0; i--){ //Exibindo a sequência invertida
        printf("%d ", v[i]);
        Sleep(800);
    }
    printf("\n=========================");

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
        case 3:
            questao_3();
            Sleep(3000);
            break;
        case 4:
            questao_4();
            Sleep(3000);
            break;
        case 5:
            questao_5();
            Sleep(3000);
            break;
        case 6:
            questao_6();
            Sleep(3000);
            break;
        case 7:
            questao_7();
            Sleep(3000);
            break;
        case 8:
            questao_8();
            Sleep(3000);
            break;
        case 9:
            questao_9();
            Sleep(3000);
            break;
        case 10:
            questao_10();
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