#include <stdio.h>
#include <locale.h>

int main()
{
	float a;
	int b;
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("Digite um número: ");
	scanf("%f", &a);
	printf("Digite outro número: ");
	scanf("%d", &b);
	
	return 0;
}
