#include <stdio.h>
main()
{
	int salario;
	printf("introduza o seu salario");
	scanf("%d",&salario);
	if(salario<2000)
	salario = salario + 100;
	if(salario>2000)
	salario = salario + 20;
	printf("salario = %d",salario);
	
	
	
	
	
}
