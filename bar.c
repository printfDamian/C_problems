#include <stdio.h>
main()
{
	char produto;
	int q;
	float preco;	
		printf("s-sandes,a-agua,b-bolo,c-cafe qual produto quer? \n");
		scanf("%c", &produto);
		printf("quantos quer:");
		scanf("%f",&q);
	switch(produto)
		{
		case 's':preco =  2*q;printf("vai custar %.2f",preco);break; 
		case 'a':preco =  0.90*q;printf("vai custar %.2f",preco);break;
		case 'b':preco =  1.20*q;printf("vai custar %.2f",preco);break;
		case 'c':preco =  0.60*q;printf("vai custar %.2f",preco);break;	
	    default:printf("incorreto renicie o programa e veja as letras");
	
	}	
	
	
	
	
	
	
	
	
	
}
