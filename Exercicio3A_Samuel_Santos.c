#include <stdio.h>
// perguntas e respostas 
main()
{
int num,resp;
srand(time(NULL));
num = rand()%11+1;	

if(num == 1)
	{
	printf("quanto e 1*1\n");
	scanf("%d",&resp);
	if(resp==1)
	printf("certo\n");
	else
	printf("errado\n");
	}
if(num == 2)
	{
	printf("quanto e 9*2\n");
	scanf("%d",&resp);
	if(resp==18)
	printf("certo\n");
	else
	printf("errado\n");
	}
if(num == 3)
	{
	printf("quanto e 10*5\n");
	scanf("%d",&resp);
	if(resp==50)
	printf("certo\n");
	else
	printf("errado\n");
	}
if(num == 4)
	{
	printf("quanto e 10*10\n");
	scanf("%d",&resp);
	if(resp==100)
	printf("certo\n");
	else
	printf("errado\n");
	}
if(num == 5)
	
	{
	printf("quanto e 7*2\n");
	scanf("%d",&resp);
	if(resp==14)
	printf("certo\n");
	else
	printf("errado\n");
	}

if(num == 6)
	{
	printf("quanto e 3*1\n");
	scanf("%d",&resp);
	if(resp==3)
	printf("certo\n");
	else
	printf("errado\n");
	}

if(num == 7)
	
	{
	printf("quanto e 5*2\n");
	scanf("%d",&resp);
	if(resp==10)
	printf("certo\n");
	else
	printf("errado\n");
	}

if(num == 8)
	
	{
	printf("quanto e 3*3\n");
	scanf("%d",&resp);
	if(resp==9)
	printf("certo\n");
	else
	printf("errado\n");
	}

if(num == 9)
	{
	printf("quanto e 3*2\n");
	scanf("%d",&resp);
	if(resp==6)
	printf("certo\n");
	else
	printf("errado\n");
	}
if(num == 10)
	{
	printf("quanto e 5*3\n");
	scanf("%d",&resp);
	if(resp==15)
	printf("certo\n");
	else
	printf("errado\n");
	}

	
	
	
}
