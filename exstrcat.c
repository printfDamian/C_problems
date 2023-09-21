#include <stdio.h>
#include <string.h>
//para concatenar strings; strcat(string_destino,string_origem)
main()
{
	char nome[10],apelido[10];
	puts("qual o primeiro nome ");
	gets(nome);
	puts("qual o apelido");
	gets(apelido);
	strcat(nome," ");
	strcat(nome,apelido);
	printf("Ola senhor(a) %s",nome);
}
