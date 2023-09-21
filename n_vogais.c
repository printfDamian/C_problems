#include <stdio.h>
#include <string.h>
// o progrma tdeve receber uma palavra e contar o numero de vogais
//mostra o total de carateres e a percentagem de vogais 
main()
{
	char palavra[30];
	int i,vogais = 0;
	float percent;
	puts("insira uma palavra");
	gets(palavra);
	strlwr(palavra);
	for(i=0;i<strlen(palavra);i++)
	{
		if(palavra[i]=='a'||palavra[i]=='e'||palavra[i]=='i'||palavra[i]=='o'||palavra[i]=='u')
		vogais = vogais + 1;	
	}
	percent = (vogais * 100)/strlen(palavra);
	printf("numero de vogais  %d \nnumero caracteres %d \npercentagem: %.0f%%",vogais,strlen(palavra),percent);
	
		
}
