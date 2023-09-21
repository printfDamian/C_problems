#include <stdio.h>
#include <string.h>
//calcule o numero de carateres de uma string sem usar o strlen -> contachar.c
char 
main()
{
	char palavra[20];
	int contar=0,i,num;
	puts("insira uma palavara");
	gets(palavra);
	//opcao 1- nao e a pretendida por usar a funcao strlen
	num = strlen(palavra);
	//for(i=0;i<num;i++)
		//contar++;
	/*while(1)
	{
	if(palavra[contar]	=='\0')
	break;
		else
	contar++;
	
	}opcao 3 while limitado*/
	while(palavra[contar]!='\0')
	{
		contar++;
	}
	
	printf("a palavra %s  tenm %d caracteres",palavra,contar);
	//printf("apalavra tem %d caracteres",strlen(palavra))
}
