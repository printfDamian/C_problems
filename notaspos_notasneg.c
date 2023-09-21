#include <stdio.h>
main()
{
int nota,i,negativas,positivas,alunospositivos;
float ac,contar,media,media_positivas;
	positivas = 0;
	negativas = 0 ;
	media = 0;
	alunospositivos = 0;
	for(i=1;i<=23;i++)
	{
	 printf("introduza as nota\n");
	 scanf("%d",&nota);
	 media = media + nota;
	 if(nota < 10)
	 negativas = negativas  + 1;
	 if(nota >= 10)
		{
	  		positivas = positivas + nota;
	 		alunospositivos += 1;
	 		
	 		
		}
	} 
	media = media /23;
	media_positivas = positivas/alunospositivos;
	
	printf("negativas = %d ; positivas = %d media da turma %.1f media das positivas %.1f",negativas,alunospositivos,media,media_positivas);
   
	
	
	}
