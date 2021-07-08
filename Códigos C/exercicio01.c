#include <stdio.h>

int main()
{
    int n1, n2;

    while (0 == 0){
        printf("\n\nDigite um numero inteiro: ");
        scanf("%d", &n1);
        printf("Digite outro numero inteiro: ");
        scanf("%d", &n2);

        if (n1 % n2 == 0)
        {
            printf("%d e %d SAO divisiveis entre si", n1, n2);
        }else
            printf("%d e %d NAO sao divisiveis entre si\n", n1, n2);
    }
    return 0;
}