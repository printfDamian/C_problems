#include <stdio.h>
void soma_quadrados(int n1,int n2)
{
int resultado;

resultado = n1*n1+n2*n2;
resultado = resultado * 3.14;
printf("A soma do quadrado dos numeros e %d\n",resultado);		
	
}
void subtracao(int n1,int n2)
{
int resultado;

resultado = n1 - n2;	
printf("a subtracao = %d",resultado);
}
void media(int n1,int n2)
{
float media;

media = n1+n2/2;
printf("media = %.1f",media);
}
main()
{
int resp,n1,n2;
do
{

printf("digite 2 numeros\n");
scanf("%d %d",&n1,&n2);	
printf("-------menu-----\n");
printf("1-soma dos quadrados\n");
printf("2-subtracao\n");
printf("3-media\n");


printf("4-sair\n");
scanf("%d",&resp);
switch(resp)	

{

case 1:soma_quadrados(n1,n2);break;
case 2:subtracao(n1,n2);break;
case 3:media(n1,n2);break;
case 4:printf("vai sair\n");break;
default:printf("digite um numero que esteja na tabela");
}
}while(resp!=4);
}
