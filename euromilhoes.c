#include <stdio.h>
//programa do euro milhoes 
main()
{
int estrela,num;
srand(time(NULL));
num1 = rand()%50+1;
star = rand()%12+1;
printf("insira as estrlas\n");
scanf("%d",&estrela);
printf("insira os numeros\n");
scanf("%d",&num)
if(star == estrela && num1 == num)
printf("acabou de ganhar o euromilhoes\n");
else 
printf("errou o numero era %d e a estrela era %d\n",num1,star);

}
