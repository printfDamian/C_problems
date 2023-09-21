#include <stdio.h>
main()
{
	float dolar,euro,conversao;
	printf("intruduza um valor em dolares:  ");
	scanf("%f",&dolar);
	conversao= dolar/1.09;
	printf("conversao de dolar para euro = %.2f euros\n",conversao);
	
}
