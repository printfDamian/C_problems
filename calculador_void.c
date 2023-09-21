#include <stdio.h>
//calculadora
int soma(int n1,int n2)      
{
	
	return n1+n2;
}
int produto(int n1,int n2)
{
return n1*n2;
}
float divisao(float n1,float n2)
{

return n1/n2;

}
int  subtracao(int n1,int n2)
{

return n1-n2;
} 
int potencia(int base,int expoente)
{
int i,resultado;
resultado = 1;
for (i=1;i<=expoente;i++)
resultado = resultado*base;
return resultado;	
}
int quadrado(int n1)
{
	return n1*n1;
} 
main()
{
int n1,n2,valor,solucao,base,expoente;
char resp;  
  do
  {

printf("---------menu---------------------\n");
printf("|	+soma           	 |\n");
printf("|	-subtracao      	 |\n");
printf("|	xmultiplcacao   	 |\n");
printf("|	:divisao        	 |\n");
printf("|	^potencia		 |\n");
printf("|	q-quadrado 	  	 |\n");
printf("|	s-sair           	 |\n");
printf("----------------------------------\n");
printf("escolha um do numeros da tabela\n");
scanf(" %c",&resp);
if(resp!='s')
{

	switch(resp)
	{
	case '+':
	printf("digite dois numeros\n");
		scanf("%d %d",&n1,&n2);
		valor = soma(n1,n2);
	printf("%d + %d = %d\n",n1,n2,valor);break;
	case '-':
	{printf("digite dois numeros\n");
	scanf("%d %d",&n1,&n2);
	valor = subtracao(n1,n2);
	printf("%d - %d = %d\n",n1,n2,valor);break;}
	case 'x':
	{printf("digite dois numeros\n");
	scanf("%d %d",&n1,&n2);
	valor = produto(n1,n2);
	printf("%d * %d = %d\n",n1,n2,valor);break;}
	case ':':
	{printf("digite dois numeros\n");
	scanf("%d %d",&n1,&n2);
	valor = divisao(n1,n2);
	printf("%d : %d = %d %d\n",n1,n2,valor);break;}
	case '^':
	{printf("introduza a base\n");
	scanf("%d",&base);
	printf("introduza o expoente\n");	
	scanf("%d",&expoente);
	solucao=potencia(base,expoente);
	printf("%d^%d = %d\n",base,expoente,solucao);break;}
	case 'q':
	{printf("digite um numero\n");
	scanf("%d",&n1);
	valor = quadrado(n1);
	printf("%d^2 = %d\n",n1,valor);break;}
	case 's':printf("vai sair");break;	
	}
}
else 
printf("vai sair");

  }while(resp!='s');
}


