#include <stdio.h>
int media(int n1,int n2)
{
	
return (n1+n2)/2;	
}
int ano_bissexto(int ano)
{
if(ano%4==0)

return 1;
else 
return 0;		
	
}
int quantos_anos_em_2021(int data)
{
	
return 2021-data;	
}
main()
{
int valor,resp,n1,n2,ano,data;
do
{

printf("---------menu---------\n");
printf("1-media\n");
printf("2-bissexto\n");
printf("3-quantos anos vai fazer em 2021\n");
printf("4-sair\n");	
scanf("%d",&resp);
	switch(resp)
	{
	case 1:
		printf("insira 2 numeros\n");
		scanf("%d %d",&n1,&n2);
		valor = media(n1,n2);
		printf("a media e %d",valor);break;
	case 2:
		if (valor=ano_bissexto(ano)==1)
		printf(" o ano  bissexto");
		else
		printf("o ano nao e bissexto");break;
	case 3:
		printf("em que ano nasceu?\n");
		scanf("%d",&data);
		valor =quantos_anos_em_2021(data);
		printf("Em 2021 faz %d anos\n",valor);break;
	case 4:printf("vai sair");break;
	default:printf("numero invalido\n");
	}
}while(resp!=4);
}
