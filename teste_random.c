#include <stdio.h>
int gerar_aleatorio1()
{
	int num1;
	srand(time(NULL));
	num1 = rand()%10+1;
	return num1;
}
int gerar_aleatorio2()
{
	int num2;
	srand(time(NULL));
	num2 = rand()%10+1;
	return num2;
}
comparar_numeros(int num1,int num2)
{
	if (num1 == num2)
	return 1;
	else 
	return 0;	
	
}
main()
{
	int iguais,n1,n2;
	n1 = gerar_aleatorio1();
	n2 = gerar_aleatorio2();
	iguais = comparar_numeros(n1,n2);
	if(iguais == 1)
	printf("%d e %d sao iguais",n1,n2);
	else 
	printf("%d e %d sao diferentes",n1,n2);
	
}
