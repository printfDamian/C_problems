#include <string.h>
#include <stdio.h>
//programa que pede 3 strings e indica qual é a maior 
main()
{

char p1[15],p2[15],p3[15];
int tam1,tam2,tam3;
	puts("insira  palavra1");
		gets(p1);
	puts("insira  palavra2");
		gets(p2);
	puts("insira  palavra3");
		gets(p3);
	tam1 = strlen(p1);
	tam2 = strlen(p2);
	tam3 = strlen(p3);
	if(tam1 > tam2 && tam1 > tam3)
		printf("%s e maior",p1);
	if(tam2 > tam1 && tam2 > tam3)
		printf("%s e maior",p2);
	if(tam3 > tam2 && tam3 > tam1)
		printf("%s e maior",p3);
	
	
	
	
}
