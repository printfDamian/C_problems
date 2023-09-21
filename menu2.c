#include <stdio.h>
void conversorF()
{
int F,c;
printf("digite um valor em Celsius \n");
scanf("%d",&c);
F =(1.8 * c)+32; 
printf("O valor e %d Celsius\n",F);
}
void conversoC()
{
int C,f;
printf("digite um valor em Fahrenheit\n");
scanf("%d",&f);
C = (f-32)/1.8;
printf("O valor  e %d Fahrenheit\n",C);	
}
main()
{
char resp;
	do
	{
printf("------menu--------\n");
printf("F: converter de C para F\n");
printf("C: converter de F para C\n");
printf("P:va sair \n");
scanf("%c",&resp);
		switch(resp)
		{
		case 'F':conversorF();break;
		case 'C':conversoC();break;
		case 'P':printf("vai sair\n");break;
		default:printf("digite um letra que esteja na tabela\n");
		}

	}while(resp!='P');	
	
	
}
