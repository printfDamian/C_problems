#include <stdio.h>
main()
{
int resp,num;

do{


printf("1-O que vai acontecer hoje\n");
printf("2-O que vai acontecer amanha\n");
printf("3-O que vai acontecer no fim de semana\n");
printf("4-sair\n");
scanf("%d",&resp);

switch(resp)
{
case 1:
	{
	srand(time(NULL));
	num = rand()%2;
	if(num == 1)
	printf("vai encontrar 1 euro no chao\n");
	else
	printf("vai adormecer\n");break;
	}
	case 2:
	{
	srand(time(NULL));
	num = rand()%2;
	if(num == 1)
	printf("vai encontrar 1 euro no chao\n");
	else
	printf("acertou no numero do euro milhoes mas cancelaram \n");break;
	}	
	case 3:
	{
	srand(time(NULL));
	num = rand()%2;
	if(num == 1)	
	printf("vai encontrar 1 euro no chao\n");
	else
	printf("vai adormecer\n");break;
	}
case 4:printf("sair");break;

}
	
}while(resp != 4);
}
