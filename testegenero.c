#include <string.h>
#include <stdio.h>

/*programa que pede o nome o genero e a idade se for do genero feminino e tiver idade inferior a 25 
indicar APTO caso contrario indicar NAO APTO e a razao porque nao foi aceite 
->apto.c*/

main()
{
	char genero[10],nome[10];
	int idade;
		
	puts("insira nome");
		gets(nome);
	puts("insira genero F ou M");
		gets(genero);
	printf("insira idade\n");
		scanf("%d",&idade);
	strupr(genero);
	if(idade < 25 && genero[0] == 'F')
		printf("Apto,porque cumpre com todos os requisitos");
	if(idade > 25 && genero[0] == 'F')
		printf("Nao esta apto, poque tem de ter menos de 25 anos");
	if(idade < 25 && genero[0] == 'M')
		printf("Nao esta apto tem de ser do genero feminino ");
	if(idade > 25 && genero[0] == 'M')
		printf("Nao esta apto,porque tem de ter menos de 25 anos e ser do genero feminino ");
	
	
}
