#include <stdio.h>

//pede o nome e mostra 1�,3�e o 5� carater do nome 
main()
{
	char nome[10];
	puts("insiram o nome");
	gets(nome);
	printf("1 letra:%c \n3 letra:%c \n5 letra:%c",nome[0],nome[2],nome[4]);
}
