#include <stdio.h>
#include <stdlib.h>
 
 main()
{
// Declara��o das vari�veis
	float raio, pi=3.1415, area,perimetro;
	
// obter raio 
	printf("raio = "); 
	scanf("%f", &raio);
//  �rea da circunfer�ncia
	area = pi * raio * raio;
//perimetro do circulo 
 	perimetro = 2*pi*raio;
// resultado
	printf("area = %.2f \n", area);
 	printf("perimtro = %.2f \n",perimetro);
	
}

