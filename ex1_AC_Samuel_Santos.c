#include <stdio.h>
main()
{
char est_civil;
printf("insira o seu estado civil S-Solteiro C-Casado D-Divorciado:\n");	
scanf("%c",&est_civil);
switch(est_civil)
	{	
		case 'S':printf("Solterio\n");break;
		case 'C':printf("Casado\n");break;
		case 'D':printf("Divorciado\n");break;
		default:printf("Outro estado civil nao considerado\n");	
	
	}
	
}
