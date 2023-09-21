#include <stdio.h>
main()
{
int segundos,minutos,horas,segundos2;
	printf("digite os segundos");
		scanf("%d",&segundos);
horas = segundos / 3600;
minutos = (segundos % 3600)/60;
segundos2 = (segundos % 3600)%60;
printf("horas %d minutos %d segundos %d",horas,minutos,segundos2);	
}
