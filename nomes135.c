#include <stdio.h>

//pede o nome e mostra 1º,3ºe o 5º carater do nome 
main()
{
	char nome[10];
	puts("insiram o nome");
	gets(nome);
	printf("1 letra:%c \n3 letra:%c \n5 letra:%c",nome[0],nome[2],nome[4]);
}
