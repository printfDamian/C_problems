#include <stdio.h>
main()
{
int alunos,x;
float media,teste1,teste2;

	printf("quantos alunos a turma tem ?\n");
		scanf("%d",&alunos);
	
	for  (x=1;x<=alunos;x++)
	{
	
	printf("introduza a nota do teste1 e teste2:\n");
		scanf("%f %f",&teste1,&teste2);
		media = (teste1 + teste2)/2;
		printf("media do aluno: %.1f\n",media);
	}
}
