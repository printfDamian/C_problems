#include <stdio.h>
#include <string.h>
//comparar strings: strcmp(strin1,string2) retorna 0 se forem iguais
main()
{
	char local_nascimento[12],local_residencia[12];
	puts("local onde nasceu");
	gets(local_nascimento);
	puts("onde mora");
	gets(local_residencia);
	if(strcmp( local_nascimento,local_residencia))
	printf("os locais onde vive e onde nasceu sao diferentes");
	else
	printf("os locais onde vive e onde nasceu sao os mesmos");
}
