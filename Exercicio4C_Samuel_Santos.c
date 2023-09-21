#include <stdio.h>
#include <math.h>
main()
{
int raiz1,raiz2,a,b,c;	
printf("a b c\n");
scanf("%d %d %d",&a,&b,&c);
raiz1 = -b-sqrt(b*b-4*a*c);
raiz2 = -b+sqrt(b*b-4*a*c);
printf("raiz 1 %d, raiz 2 %d",raiz1,raiz2);
}





