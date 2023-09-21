#include <stdio.h>
main()
{
int n1,n2;
do
{
printf("introduza um numero\n");
scanf("%d %d",&n1,&n2);





if(n1>n2)
	printf("%d>%d\n",n1,n2);
if(n2>n1)
	printf("%d>%d\n",n2,n1);

	
}	while(n1!=0);
	
	
}
