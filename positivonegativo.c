#include <stdio.h>
main()
{
int n;

do	
{
printf("introduza um numero\n");
scanf("%d",&n);
 if(n<0)
 printf("negativo\n");
if(n>0)
printf("positivo\n");	
}while (n!= 0);

}
