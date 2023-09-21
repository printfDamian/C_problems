#include <stdio.h>
#include <string.h>
main()
{
	char nome[30];
	int i;
	puts("nome");
	gets(nome);
	for(i=strlen(nome)-1;i>=0;i--)
	printf("%c",nome[i]);
}
