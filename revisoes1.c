#include <stdio.h>
main()
{
int i,n,positivas,negativas;
negativas = 0;
positivas = 0;
for(i=1;i<=10;i++)
 {
	printf("introduza um numero:\n");
	scanf("%d",&n);
	if(n>0)
		{
		printf("%d e positivo\n",n);
		positivas += 1 ;
		}
	if(n<0)
	{
	printf("%d e negativo\n",n);
	negativas += 1;
	}
	 if(n = 0); 
	printf("acabou\n");
  	n+=10;
 }	

	printf("%d negativos e %d positivos",negativas,positivas);
}
