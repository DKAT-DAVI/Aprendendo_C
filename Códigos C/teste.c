#include <stdio.h>

int main ()
{
	int cont;
	int numero = 1;
	
	printf("Digite o valor de cont: ");
	scanf("%d", &cont);
	
	for(cont; cont <= 10; cont = cont + 1){
		printf("%d\n", cont);
	}
	
	return 0;
}
