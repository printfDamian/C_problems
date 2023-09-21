#include <stdio.h>
/*programa soma ou produto 
execute em procedimentos */
void produto()
{
int n1,n2,resultado;
printf("insira 2 numeros");
scanf("%d %d",&n1,&n2);	
resultado = n1 * n2;	
printf("%d x %d = %d",n1,n2,resultado);	
}
void soma()
{
int n1,n2,resultado;
printf("insira 2 numeros");
scanf("%d %d",&n1,&n2);	
resultado = n1 + n2;
printf("%d + %d = %d",n1,n2,resultado);
}
main()
{
int resp;
do
{
printf("------menu-----\n");
printf("1-soma\n");
printf("2-produto\n");
printf("3-sair\n");
scanf("%d",&resp);
switch(resp)
	{
	case 1:soma();break;
	case 2:produto();break;
	case 3:printf("vai sair");break;
	default:printf("digite um dos numeros da tabela ");
	}
	
	
}while(resp!=3);
}
