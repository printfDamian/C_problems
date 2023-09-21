#include <stdio.h>
void piao()
{
int num;
srand(time(NULL));
num = rand()%4+1;
if(num == 1)
printf("Rapa\n");
if(num == 2)
printf("Tira\n");
if(num == 3)
printf("Deixa\n");
if(num == 4)
printf("Poem\n");	
}
main()
{
piao();	
}
