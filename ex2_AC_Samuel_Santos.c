#include <stdio.h>
main()
{

int n1,n2,n3,n4,maior,menor;
printf("digite 4 numeros\n");
scanf("%d %d %d %d",&n1,&n2,&n3,&n4);
// maior 
if (n1>n2>n3>n4)
	maior = n1;

if (n2>n1>n3>n4)
	maior = n2;

if (n3>n1>n2>n4)
	maior = n3;

if (n4>n1>n2>n3)
	maior = n4;
// menor
if (n1<n2<n3<n4)
	menor = n1;

if (n2<n1<n3<n4)
	menor = n2;

if (n3<n1<n2<n4)
	menor = n3;

if (n4<n1<n2<n3)
	menor = n4;
printf("maior %d menor %d",maior,menor);
}
