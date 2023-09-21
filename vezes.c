#include <stdio.h>
#include <string.h>
/*um programa que conta o numero de vezes que surge um carater escolhido pelo 
utilizador numa string tambem esclohida pelo utilizador
-> vezeschar.c*/
main()
{
	char nome[10],letra;
	int verificar = 0,i;
	puts("insira um nome");
	gets(nome);
	puts("qual a letra procurar");
	scanf(" %c",&letra);
	
	for(i=0;i<strlen(nome);i++)
	{
		if(nome[i]==letra)
			verificar = verificar + 1;
			//verificar++
			
	}
	if(verificar != 0)
		printf("A palavra %s tem %d letras %c",nome,verificar,letra);
	else
		printf("nao tem letras %c",letra);
	
	
	
}
