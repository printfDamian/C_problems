#include <stdio.h>
main()
{
float peso,altura,IMC;
printf("introduza o seu peso:\n");
scanf("%f",&peso);	
printf("intruduza a sua altura:\n");
scanf("%f",&altura);
IMC = peso/(altura*altura);
{
	if(IMC<18.5)
	printf("Esta esqueletica");
	if(IMC>=18.6 && IMC<=24.8)
	printf("E mesmo assim: Saudavel");
	if(IMC>25 && IMC<29.9)
	printf("cuidado tem peso em excesso");
	if(IMC>30)
	printf("Esta obesa");
	
	
	
	}	
	
	
	
	
	
	
	
	
}
