#include <stdio.h>
main()
{
float provaescrita,provaoral,media;
printf("introduza a nota da proa escrita:");
scanf("%f",&provaescrita);
printf("introduza a nota da prova oral:");
scanf("%f",&provaoral);
media = provaescrita*provaoral/2;
if(media<9.5)
printf("reprovado");
if(media>=9.5)
printf("aprovado");	
	
	
	
	
	
	
	
	
}
