#include <stdio.h>
//ler e mostrar nomes inseridos no teclado o programa termina quando for inserido um nome vazio
main()
{
char nome[10];
	while(1)
	{
		puts("Qual o nome?");	
		gets(nome);
		if(nome[0] =='\0' )
			return;
		else
			printf("Ola %s\n",nome);
	
	
	}

}
