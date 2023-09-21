#include <stdio.h>
main()
{

int n1,n2,i,soma,resposta;
	do
	{
	printf("introduza 2 numeros\n");
		scanf("%d %d",&n1,&n2);
	soma = 0;
	
	for	(i=n1;i<=n2;i++)
		soma = soma + i;	
		printf("soma %d\n",soma);
		printf("deseja continuar se sim-0 se nao-1\n");
		scanf("%d",&resposta);	
		

	}while (resposta!=1);
	
	
	
}
