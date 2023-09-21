#include <stdio.h>
#include <string.h>
main()
{
	char nome[50];
	int i;
	puts("insira um nome");
	gets(nome);
	while(i<strlen(nome))
	{
	printf("\n%s",nome);
	i++;	
		
	}
}
