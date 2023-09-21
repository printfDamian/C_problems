#include <stdio.h>
// ver se o numero e primo ou nao
int vereficar_se_e_primo(int n1)
{
int i,resto;
for(i=2;i<n1;i++)
 {
 
 resto = n1 % i;
 if(resto == 0)
	return 0;
}
 	return 1;


}
main()
{
int num,valor;	
printf("insira um numero\n");
scanf("%d",&num);
if (valor=vereficar_se_e_primo(num)==0)
printf("nao e primo");
else
printf("  e primo");	
}
