#include <stdio.h>
float media(float n1,float n2)
{
return n1 + n2/2;	
}
main()
{

float num1,num2,solucao;	
printf("digite 2 numeros\n");
scanf("%f %f",&num1,&num2);	
solucao=media(num1,num2);
printf("A media e %.1f",solucao);	
}
