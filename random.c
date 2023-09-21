#include <stdio.h>
main()
{
	int i;
	srand(time(NULL));//Limpa os numeros random
	for(i=1;i<=10;i++)
	printf("%d",rand()%6+2);
	
}
