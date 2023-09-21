#include <stdio.h>
main()
{
	//numero aleatorio de 1 a 20 3 tentativas 
	int num1,num,tentativas,ac;
	srand(time(NULL));
	num = rand()%20+1;
	do{
	
	printf("Qual e o numero secreto ?dica-e negativo de 1 a 20\n");
	printf("R:");
		scanf("%d",&num1);
	if(num1 != num )
	{
	printf("errou %d \n",num);
	tentativas = tentativas + 1;	
	}
	if(num1==num)
	{
	printf("acertou");
	tentativas = 3;
	}
	
}while(tentativas != 3 );
}
