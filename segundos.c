#include <stdio.h>
main()
{
int horas,minutos,segundos,conversorH,conversorM,conversor;
printf("digite as horas\n");
	scanf("%d",&horas);

printf("digite os minutos\n");
	scanf("%d",&minutos);

printf("digite os segundos\n");
	scanf("&d",&segundos);

conversorH = horas*3600;
conversorM = minutos*60;

conversor = conversorH + conversorM + segundos;
printf("%d segundos",conversor);	
	
	
}
