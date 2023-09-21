#include <stdio.h>
// areas de diferentes figuras geometricas 
void areaT()
{
int area,base,altura;
	printf("insira base e alutura\n");
		scanf("%d %d",&base,&altura);
	area = base * altura/2;
	printf(" area = %d\n",area);
}
void areaQ()
{
int lado1,lado2,areaQ;
	printf("insira 2 lados\n");
		scanf("%d %d",&lado1,&lado2);
	areaQ = lado1 * lado2;
	printf("area = %d\n",areaQ);
}
void areaR()
{
int areaR,comprimento,altura;
	printf(" insira o comprimento e a altura");
		scanf("%d %d",&comprimento,&altura);
	areaR = comprimento * altura;
	printf("area = %d\n",areaR);
}
void areaC()
{
int pi,raio,areaC;
pi = 3.14;
	printf("insira o raio\n");
		scanf("%d",&raio);
	areaC = pi * raio * raio;
	printf("area = %d \n",areaC);
}
main()
{
int resp;
do	
{
printf("-----menu-----\n");
printf("1-area do triangulo\n");	
printf("2-area do quadrado\n");	
printf("3-area do retangulo\n");	
printf("4-area do circulo\n");
printf("5-Sair\n");
scanf("%d",&resp);
switch(resp)
{
case 1:areaT();break;
case 2:areaQ();break;	
case 3:areaR();break;	
case 4:areaC();break;
case 5:printf("vai sair");break;
default:printf("coloque um numero que esteja na tabela\n");

}
}while(resp!=5);

}
