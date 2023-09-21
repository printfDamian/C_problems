#include <stdio.h>
int verifica_se_e_par(int n1)
{

if(n1%2==0)

return 1;
else 
return 0;

	
	
}
main()
{
int n1,par;
printf("digite um numero\n");
scanf("%d",&n1);
if (par=verifica_se_e_par(n1)==1)
printf(" e par");
else
printf(" nao e par");	
	
	
}
