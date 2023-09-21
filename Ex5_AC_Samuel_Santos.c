#include <stdio.h>
main()
{
//menu para fazer varias operacoes
int num,num1,num2,expoente,potencia,i;
float divisao;
potencia = 1;
do{
	printf("######### MENU #########\n");
	printf("1-dividir 2 numeros positivos\n");
	printf("2-Multiplicar 2 numeros diferentes de zero\n");
	printf( "3-calcular uma potencia de base 5\n");
	printf("4-Sair                         \n");
	scanf("%d",&num);
	switch(num)
		{
		case 1:printf("digite 2 numeros positivos:\n");
		   	   scanf("%d %d",&num1,&num2);
		       divisao = num1/num2;
		       printf("A divisao e %.1f\n",divisao);break;
		case 2:printf("multiplicar 2 numeros diferentes de 0");
		       scanf("%d %d",&num1,&num2);
		       printf("A multiplicacao e %d\n",num1*num2);break;
		case 3:printf("digite o expoente\n");
	
		      scanf("%d",&expoente);
		      for(i=1;i<=expoente;i++)
		   			potencia = potencia * 5;
			   printf("potencia e %d\n",potencia);break;
		case 4:printf("Vai sair\n");break;
		default:printf("utilize um dos numeros indicados acima\n");
	
		}
	}while(num!= 4);

}
