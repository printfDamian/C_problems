#include <stdio.h>
main()
{
// calcular o salario liquido 
float salario,taxa;
printf("introduza o seu salario");
scanf("%f",&salario);
if(salario<1000)
  taxa = 5;
if(salario>=1000 && salario<=1500)
  taxa = 11;
if(salario>1500)
  taxa = 35;
  printf("o salario e %.2f e a taxa e %.2f",salario,taxa);	
	
	
	
	
	
	
}
