#include <stdio.h>
#include <string.h>
//pede um nome e indique quantos letras a tem 
main()
{
	char nome[10];
	int contar = 0,i;
	puts("insira nome:");
	gets(nome);
	for(i=0;i<=strlen(nome);i++)
	{if(nome[i]=='a'|| nome[i] == 'A')
	contar++;}
	printf("n de letra(s) a : %d",contar);
	
}
