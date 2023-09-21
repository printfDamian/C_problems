#include <stdio.h>

float converter(int decimal)
{
	
	float binario=0,resto,f=1;
	while(decimal != 0)	
	{
			
		resto = decimal % 2;
		binario = binario + resto * f;
		f = f * 10;
		decimal = decimal / 2;
		
		
		
		
	}
	return binario;
}
main()
{
float nr_b;
int nr_d;
printf("converter decimal para binario:\n");
printf("insira um numero decimal:\n");
scanf("%d",&nr_d);	
nr_b = converter(nr_d);
printf("binario %.0f",nr_b);
	
	
}
