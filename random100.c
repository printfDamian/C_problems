#include <stdio.h>
main()
{
	
	int num,num1;
	do{
	srand(time(NULL));
	num = rand()%11+1;
	printf("insira um numro de 0 a 99\n");
	scanf("%d",&num1);
	if(num1 == num )
	printf("acabou de ganhar...... nada\n");
	else
	printf("errou o numero era %d\n",num);
	}while (num1 != num);
}
