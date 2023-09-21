#include <stdio.h>
/* programa para identificar se duas circunferencias aleatorias sao iguais
Samuel Santos*/
int gerar_aleatorio1()
{
	int raio2;
	srand(time(NULL));//permite que o random seja atualizado
	raio2 = rand()%10+1;//gera um numero aleatorio que vai de 1 ate 10
	return raio2;
}
int gerar_aleatorio2()
{
	int raio1;
	srand(time(NULL));
	raio1 = rand()%10+1;
	return raio1;
}
int comparar_circunferencia(int r1,int r2)
{
//a funcao retorna 1 se os raios forem iaguais 0 se forem diferentes
if(r1==r2)
return 1;
else
return 0;	
	
}

main()
{
	int cir1,cir2,iguais;
	cir1 = gerar_aleatorio1();
	cir2 = gerar_aleatorio2();
	iguais = comparar_circunferencia(cir1,cir2);
	if(iguais == 1)
	printf("as circuferencias sao iguais,porque o primeiro R = %d e a segunda R = %d",cir1,cir2);
	else 
	printf("as circuferencias sao diferente,porque o primeiro R = %d e a segunda R = %d",cir1,cir2);
	



}

