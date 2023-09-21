#include <stdio.h>
main()
{
	
	float stockmedio,quantidademinima,quantidademaxima;
	printf("intruduza a quantidade minima: ");
	scanf("%f",&quantidademinima);
	printf("intruduza a quantidade maxima: ");
	scanf("%f",&quantidademaxima);
	stockmedio = quantidademinima+quantidademaxima/2;
	printf("o stock medio = %.1f\n",stockmedio);
	
}
