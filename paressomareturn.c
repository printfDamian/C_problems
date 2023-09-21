#include <stdio.h>
int paressoma(int N)
{
int i,soma;
for	(i=2;i<=N;i++)
if(i%2==0)
soma += i;	
return soma;
}
main()
{
int N;
printf("digite um numero\n");
scanf("%d",&N);
printf("a paressoma e %d\n",paressoma(N)-1);
	
	
}
