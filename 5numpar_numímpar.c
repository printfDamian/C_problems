#include <stdio.h>
#include <string.h>
/*pedir 5 numeros inteiros vai guardar no array e vefifica um a um se é par é ou ímpar*/
main()
{
	int numeros[5],i,j;//variavel denominada array ou vetor que permite guadar 5 numeros
	for(i=0;i<5;i++)
	{
		printf("insira %d numero\n",i+1);
		scanf("%d",&numeros[i]);
	}
	
	for(j=0;j<5;j++)
	{
	printf("%d  ",numeros[j]);
	}
	//ciclo para ver se e par ou impar
	printf("\n");
	for(i=0;i<5;i++)
	{
		if(numeros[i]%2==0)
		printf("numero %d e par\n",numeros[i]);
		else
		printf("numero %d e impar\n",numeros[i]);
	}
	
	
}
