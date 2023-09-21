#include <stdio.h>
#include <string.h>
main()
{
	char palavra1[10];
	int i;
	for(i=0;i<=5;i++)
	{
		puts("insira uma plavra");
		gets(palavra1);
		
	
	//if (palavra1[0] == 'A'|| palavra1[0] == 'a')
	//	printf(" palavra(a) com a %s\n",palavra1);
	strupr(palavra1);
	if((palavra1[0])=='A')
	printf("%s\n",palavra1);
	}
	
}
