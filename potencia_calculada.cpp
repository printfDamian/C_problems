#include <stdio.h>
#include <math.h>
float pot(int base,int expoente)
{
	int i;
	float resultado;
	resultado = 1;
	for (i=1;i<=expoente;i++)
	resultado = resultado*base;
	return resultado;	
}
main()
{
	int base,expoente;
	printf("insira 2 numeros\n");
	scanf("%d %d",&base,&expoente);
	printf("%d^%d =  %.2f \n",base,expoente,pot(base,expoente));
	
}
