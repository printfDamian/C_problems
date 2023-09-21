#include <stdio.h>
void fatorial(int n1)
{
int f,i;
f = 1;	

for (i=1;i<=n1;i++)
f = f * i;
printf("fatorial =  %d",f);	
}
void numeros(int n1)
{
int i;
for	(i=1;i<=n1;i++)
	printf("%d\n",i);
}
main()
{
int n1;
printf("digite um numero:");
scanf("%d",&n1);
numeros(n1);
fatorial(n1);
}
