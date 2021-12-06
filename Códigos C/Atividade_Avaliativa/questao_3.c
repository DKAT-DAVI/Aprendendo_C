    /*Faca um Programa que leia tres numeros e mostre-os em ordem decrescente*/
    
    #include <stdio.h>
    #include <windows.h>

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
    printf("\n========== VETOR ==========\n");
    
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
    printf("\n==== VETOR DECRESCENTE ====\n");
    Sleep(800);
    
    for (i=0; i<3; i++)
    {
        printf("    %d\t", vetor[i]);
        Sleep(800);
    }
    printf("\n===========================\n");

    return 0;
}
    
int main(void)
{
    questao_3();

    return 0;
}