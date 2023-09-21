#include <stdio.h>
main()
{
int i,resultado,primo_ou_nao,n1;
printf("insira um numero");
scanf("%d",&n1);
for(i=1;i<=n1;i++)
 
 if(n1%i==0)
 primo_ou_nao = 1;
 printf("nao e primo\n");
 if(n1%i!=0)
 primo_ou_nao = 0;
 printf(" e primo\n");

}
