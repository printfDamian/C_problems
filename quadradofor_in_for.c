	#include <stdio.h>
main()
{
int lado,lado2,i,c,j,k,x;
printf("digite um dos lados \n");
scanf("%d",&lado);
lado = lado-1;

	for(i=0;i<=lado;i++)
		printf(" *");

	for(c=0;c<=lado;c++)
	{
	    printf("\n*");
	
	
	for(j=0;j<=lado;j++)
		printf("  ");
	
	for(k=0;k<1;k++)
		printf("*");
	}	
	printf("\n");
	for(x=0;x<=lado;x++)
	printf(" *");
	
	
	
	
}
