/*2. Numa faculdade, os alunos com média pelo menos 7,0 são aprovados, aqueles com média inferior a 3,0 são reprovados e os demais ficam de recuperação. Dadas as duas notas de um aluno, informe sua situação. Use as cores azul, vermelho e amarelo para as mensagens aprovado, reprovado e recuperação, respectivamente.*/
#include <stdio.h>
#include <conio.h>

int main()
{
    float nota1, nota2, media;
    
    printf("\nDigite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    media = (nota1 + nota2) / 2; 
    printf("Sua media foi %.2f\n", media);
    
    if (media >= 7){
        system("color 1");
        printf("ALUNO APROVADO!\n\n");
    }
    else{
        if (media >= 3 && media < 7){
            system("color 6");
            printf("ALUNO EM RECUPERACAO\n \n");
        }
        else {
            system("color 4");
            printf("ALUNO REPROVADO!\n\n");
        }
    }
    system ("PAUSE");
    return 0;
}
//NOME: DAVI KALEL ANDRADE TEIXEIRA
