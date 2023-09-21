#include <stdio.h>
main()
{
int tabuada,x,resp;
	do
	{

printf("	-------menu-------- \n");
printf("	1-tabuada do 1 \n");
printf("	2-tabuada do 2 \n");
printf("	3-tabuada do 3 \n");
printf("	4-tabuada do 4 \n ");
printf("	5-tabuada do 5 \n");
printf("	6-Sair\n");
scanf("%d",&resp);

tabuada = resp;




switch(tabuada)
	{
	case 1:
	for (x=1;x<=10;x++)
	printf("%d x %d = %d\n",x,tabuada,1*x);break;
	
	case 2:
	for (x=1;x<=10;x++)
	printf("%d x %d = %d\n",x,tabuada,2*x);break;
	
	case 3:
	for (x=1;x<=10;x++)
	printf("%d x %d = %d\n",x,tabuada,3*x);break;
	
	case 4:
	for (x=1;x<=10;x++)
	printf("%d x %d = %d\n",x,tabuada,4*x);break;

	case 5:
	for (x=1;x<=10;x++)
	printf("%d x %d = %d\n",x,tabuada,5*x);break;
	
	case 6:printf("vai sair");break;
	default:printf("insira um dos numeros da tabela");
	}
	}while(resp!=6);
}
