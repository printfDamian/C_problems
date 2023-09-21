#include <stdio.h>
#include <string.h>
// usar a funcao de copia strings: strcpy(string destino,string origem)
main()
{
char nome1[10];
char nome2[10];	
puts("insira o nome");
gets(nome1);
gets(nome2);
strcpy(nome2,nome1);//o nome é colocado tambem na variavel nome 2 
printf("o nome e %s",nome2);

}
