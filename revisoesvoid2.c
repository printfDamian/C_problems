#include <stdio.h>
//mesma coisa so quem variaveis no main 
// aqui é variavel global 
int soma(int n1,int n2)//variaveis formais 
{
	//int soma;
	//soma = n1 + n2;
	//printf("%d + %d = %d\n",n1,n2,soma);
	//return soma;
	return n1+n2;
}
int produto(int n3,int n4)
{
	//int produto;
	//produto = n3 * n4;
	//printf("%d x %d = %d\n",n3,n4,produto);
	return n3*n4;
}
main()
{
int num1,num2,resp,valor;// aqui e variavel local 
do
{
printf("---menu-----------\n");
printf("| 1-soma	|\n");
printf("| 2-produto	|\n");
printf("| 3-sair 	|\n");
printf("------------------\n");
scanf("%d",&resp);
if(resp!=3)

{
printf("insira 2 numeros \n");
scanf("%d %d",&num1,&num2);
switch(resp)
	{
	case 1://printf("a soma e %d\n",soma(n1,n2));break; outra forma 
			valor = soma(num1,num2);
			printf("a soma e %d\n",valor);break;
	case 2:
			valor = produto(num1,num2);
			printf("O produto e %d\n",valor);break;
	
	case 3:printf("vai terminar");break;
	default:printf("numero invalido");
	}
}
else
printf("vai sair"); 

}while(resp!=3);
}
