#include <stdio.h>
int potencia(int base,int expoente)
{
int i,resultado;
resultado = 1;
for (i=1;i<=expoente;i++)
resultado = resultado*base;
return resultado;	
}
main()
{
int base,expoente,solucao;
printf("introduza a base\n");
scanf("%d",&base);
printf("introduza o expoente\n");	
scanf("%d",&expoente);
solucao=potencia(base,expoente);
printf("potencia = %d",solucao);
}
