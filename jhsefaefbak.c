#include <stdio.h>
main()
{
	
	int dado1,dado2,adivinha,soma_dos_dados;

	srand(time(NULL));
	dado1 = rand()%6+1;
	dado2 = rand()%6+1;
	soma_dos_dados = dado1+dado1;
	
	
	printf("a soma dos dados e %d",soma_dos_dados);

	
	
	
}
