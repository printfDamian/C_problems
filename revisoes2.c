#include <stdio.h>
main()
{
char letra;
int num1,num2,num3;
do{
	printf("--------menu-------\n");
	printf("A-adicionar 3 numeros\n");
	printf("S-sair\n");
	scanf("%c",&letra);
	switch(letra)
		{
	case'A':printf("indique 3 numeros");
		scanf("%d %d %d",&num1,&num2,&num3);
		printf("A soma e %d\n",num1+num2+num3);
	case'S':printf("Vai terminar");break;
		}
	}
	while(letra!='S');

}
