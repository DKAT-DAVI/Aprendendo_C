#include <stdio.h>
#include <locale.h>

int main()
{
	float a;
	int b;
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("Digite um n�mero: ");
	scanf("%f", &a);
	printf("Digite outro n�mero: ");
	scanf("%d", &b);
	
	return 0;
}
