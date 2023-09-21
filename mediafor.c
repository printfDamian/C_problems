#include <stdio.h>
main()
{

int alunos,x,contar,ac;
float media_turma,teste1,teste2,nota;

	contar = 0;
	ac = 0;
	
	
	
	
		printf("quantos alunos a turma tem ?\n");
			scanf("%d",&alunos);
	
		for  (x=1;x<=alunos;x++)
		{
		printf("introduza a nota do teste1 e teste2:\n");
			scanf("%f %f",&teste1,&teste2);
			nota = (teste1 + teste2)/2;
			printf("media do aluno: %.1f\n",nota);
		}
	    	contar = contar + 1;
			ac = ac + nota;
	
	
	
media_turma = ac/contar;
printf("media da turma  %.1f",media_turma);
	
}
	
	

	
	
	
	

	
	
	
	
	
	
	
	
	
	
	

