#include <stdio.h>
main()
{
	int num,i,pares,impares;
	for(i=1;i<=8;i++)
	{
		printf("introduza um numero\n");
		scanf("%d",&num);
		if(num%2==0)
			pares = pares + 1;
		if(num%2!=0)
			impares = impares + 1;
	}
	printf("pares: %d impares: %d\n",pares,impares);
}
