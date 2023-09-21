#include <stdio.h>
// quadrado de numeros pares
int verifica_se_e_par(int n1)
{
if(n1%2==0)

return 1;
else 
return 0;
}
main()
{
int par,num,valor;
do
{
printf("insira um numero\n");
scanf("%d",&num);
if (valor=verifica_se_e_par(num)==1) 	
{
printf("%d",num*num);
valor = par;
}
else
printf("o numero que inseriu nao e par\n");
}while(valor!=par);
}
