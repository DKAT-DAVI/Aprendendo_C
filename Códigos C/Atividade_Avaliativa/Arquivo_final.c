//Incluindo as bibliotecas necessárias
#include <stdio.h>  //Biblioteca de entrada e saída de dados
#include <windows.h> //Biblioteca para o uso da função Sleep() para fazer uma pausa temporária no programa.

//FUNÇÕES UTILIZADAS NO CÓDIGO

void title() //Declarando função PARA O CABEÇALHO
{
    Sleep(800); //Usando função Sleep() para fazer pequenas pausas no programa
    printf("\n======= INTRODUCAO A PROGRAMACAO ======="); //Cabeçalho
    Sleep(800);
    printf("\n|         ATIVIDADE AVALIATIVA         |");
    Sleep(800);
    printf("\n|                                      |");
    Sleep(800);
    printf("\n|  Aluno: Davi Kalel Andrade Teixeira  |");
    Sleep(800);
    printf("\n|     Turma: 1o ano - Informatica      |");
    Sleep(800);
    printf("\n|           Data: 03/12/2021           |");
    Sleep(800);
    printf("\n|          Escola: IFNMG - MOC         |");
    Sleep(800);
    printf("\n|                                      |");
    Sleep(800);
    printf("\n========================================\n");
    Sleep(800);

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
    //Input do código
    printf("\nINPUT ->\n");
    Sleep(700);
    printf("printf('Alo Mundo');\n");
    Sleep(700);
    //Print do código na tela
    printf("\nOUTPUT ->");
    Sleep(700);
    printf("\nAlo Mundo");
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
        printf("\n\nOPCAO INVALIDA!");
        printf("\nDISPONIVEIS APENAS QUESTOES ENTRE 1 E 10");
        printf("\n\nDIGITE O NUMERO DA QUESTAO PARA EXECUTAR: ");
        scanf("%d", &escolha);
    }

    system ("cls"); //Limpar a tela para executar a questão
    
    //switch para executar as questões
    switch (escolha)
    {
    case 1:
        questao_1();
        break;
    }

    return 0; //Retornando 0
}
//NOME: DAVI KALEL ANDRADE TEIXEIRA