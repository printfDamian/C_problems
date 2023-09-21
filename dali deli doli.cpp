#include <stdio.h>
main()
{
int i,n,positivos,negativos;
negativos = 0;
positivos = 0;
for(i=1;i<=10;i++)
 {
	printf("introduza um numero:\n");
	scanf("%d",&n);
	if(n>0)
		{
		printf("%d e positivo\n",n);
		positivos += 1 ;
		}
	else
	{
	}if(n<0)
	{
	printf("%d e negativo\n",n);
	negativos += 1;
	}
  else
  printf("acabou\n");
  i+=10;
  
  
  
  }	
	printf("%d negativos e %d positivos",negativos,positivos);
}
