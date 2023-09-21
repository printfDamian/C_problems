#include <stdio.h>
main()
{
	/* Cálculo do salário sabendo que por cada hora recebe 15 euros e por cada hora extra
resultante de trabalhar mais do que 50 horas semanais é recebida a 25 euros cada*/
	char c;
	float n,e,salario,salarioextra;

	printf("introduza o numero de horas");
	scanf("%f",&n);
	
	
	if(n<50)
{	
		salario = n*15;
		e=0;
}

	else
	{
		salario = 50*15;
		e = n-50;
		salarioextra = e*25;
	}

	printf("salario = %.2f salarioextra = %.2f",salario,salarioextra);
	
	
	
	
	
	
}
