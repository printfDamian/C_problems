#include <stdio.h>
main()
{
int ac,contar,nota;
float media_turma;
ac = 0; 
contar = 0;
do
{

	printf("introduza a nota: \n");
	scanf("%d",&nota);
	if(nota!=-1)
	{
		contar = contar + 1;
		ac = ac + nota;
	}
}while(nota!= -1);
	
	
media_turma = ac/contar;
printf(" media %.1f",media_turma);	
	
	
}
