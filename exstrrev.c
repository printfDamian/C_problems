#include <stdio.h>
#include <string.h>
//programa para inverter uma variavel:strrev(string)
main()
{
	char nome[10];
	puts("insira um nome");
	gets(nome);
	strrev(nome);
	printf("o nome ao contrario e %s",nome);
}
