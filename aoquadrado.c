#include <stdio.h>
// quadrado do numero
int quadrado(int n1)
{
return n1*n1;	
	
}

main()
{
	int num1,valor;
	printf("digite um numero");
	scanf("%d",&num1);
	valor = quadrado(num1);
	printf("O quadrado de %d e %d ",num1,valor);	
}
