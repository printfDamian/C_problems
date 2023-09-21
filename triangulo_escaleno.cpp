#include <stdio.h>
int escaleno_ou_nao(int lado1,int lado2,int lado3)
{
int ok;
if(lado1!=lado2 && lado1 != lado3)
	ok = ok + 1;
if(lado2!=lado3 && lado2 != lado1)
	ok = ok + 1;
if(lado3!=lado2 && lado3 != lado1)
	ok = ok +1;
if(ok == 3)
printf("o triangulo e escaleno");
else 
printf("o triangulo nao e escaleno");
	
}
main()
{
int lado1,lado2,lado3,valor;
	printf("insira o valor dos 3 lados do triangulo\n");
	scanf("%d %d %d",&lado1,&lado2,&lado3);
	escaleno_ou_nao(lado1,lado2,lado3);
}
