#include <stdio.h>
int calcular_maior(int num1,int num2,int num3)
{
int maior;
	if(num1>num2 &&	 num1>num3)
		maior = num1;
	if(num2>num1 &&	num2>num3)
		maior = num2;
	if(num3>num1 &&	num3>num2)
		maior = num3;
	
return maior;	
	
}
main()
{
int n1,n2,n3,maior;
	printf("digite 3 numeros\n");
		scanf("%d %d %d",&n1,&n2,&n3);	
	
	maior=calcular_maior(n1,n2,n3);
	printf("o maior e %d",maior);	

}
