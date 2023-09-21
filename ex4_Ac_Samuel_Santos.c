#include <stdio.h>
main()
{
int n,i,tentativas;
		
	do
	{
	printf("Qual e o numero secreto ?dica-e negativo de -1 a -9\n");
	printf("R:");
		scanf("%d",&n);
	if(n!= -9)
		printf("errou\n");
		tentativas = tentativas + 1;
	}while(n!= -9);
	

	printf(" acertou em %d tentativas",tentativas);
	
	
}
