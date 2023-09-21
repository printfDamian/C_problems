#include <stdio.h>
main()
{
int tabuada,x;
printf("insira o numero da tabuada:\n");
scanf("%d",&tabuada);

	for (x=1;x<=10;x++)
		printf("%d x %d = %d\n",x,tabuada,tabuada*x);
}
