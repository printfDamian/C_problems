#include <stdio.h>
#include <string.h>
//programa que conte o nuemro de strings
int contar(char palavra[])
{
	while(palavra[contar]!='\0')
	{
		contar++;
		return contar;
	}
	
}

main()
{
	char palavra[20];
	int contar=0,i,numero;
	puts("insira uma palavara");
	gets(palavra);
	contar(palavra);
	numero = contar(palavra);
	printf("a palavra %s  tenm %d caracteres",palavra,numero);
	
}

