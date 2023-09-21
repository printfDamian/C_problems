#include <stdio.h>
main()
{
int ac,contar,nota,alunos,x;
float media_turma;
ac = 0; 
contar = 0;
printf("introduza o numero de alunos \n");
scanf("%d",&alunos);
for(x=1;x<=alunos;x++)
{
		
	printf("introduza a nota: \n");
	scanf("%d",&nota);

	if(nota!=-1)
	{
		contar = contar + 1;
		ac = ac + nota;
		media_turma = ac/contar;
	}
	if(nota==-1)
	alunos + 1;
}
printf(" media %.1f",media_turma);	

}

