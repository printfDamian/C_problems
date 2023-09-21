#include <stdio.h>
main()
{
	int idade;
	printf("introduza a sua idade:");
	scanf("%d",&idade);
	{
	
	if(idade>=0 && idade<=3 )
		printf("bebe");
		
	if(idade>=4 && idade<=10)
		printf("criança");
		
	if(idade>=11 && idade<=17)
		printf("adolescente");
		
	if(idade>=18)
		printf("adulto");
	}
	
}
