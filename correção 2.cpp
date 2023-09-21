#include <stdio.h>
#include<stdbool.h>
/* pedir 5 numeros e mostrar o valor máximo e o mínimo
terminar se introduzir o número zero*/
main()
{	int i, num, valor_max, valor_min,repeticoes;
	bool termina;
	termina=false;
    printf("quantos numeros ?\n");
    scanf("%d",&repeticoes);
	for(i=1; i<=repeticoes;i++)
    {
        printf("Selecione um numero: ");
        scanf("%d", &num);
        if (num==0)
        {	printf("O número nao e valido, vai terminar");
        	termina=true;
        	i=6;
		}
		else
		{
			if (i==1)
				valor_max=valor_min=num; 
			if ((num >valor_max)||(num<valor_max))
        		if (num >valor_max)
        	    	valor_max=num;
        		else
        			valor_min=num;  
		}      
	}
	if (!termina)
		printf(" O valor maximo foi %d \n O valor minimo foi %d \n", valor_max, valor_min);
}
