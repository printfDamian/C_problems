#include <stdio.h>
#include <string.h>
/*programa que indique o numero de carateres de uma string
strlen(string)*/
main()
{
	char nome[10];
	puts("insira o nome:");
	gets(nome);
	printf("nome: %s\ncarateres:%d",nome,strlen(nome));	
}
