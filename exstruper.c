#include <stdio.h>
#include <string.h>
//programa para colocar uma string em maisculas strupr(string)
main()
{
char resposta[5];
puts("qual e a resposta? sim ou nao");
gets(resposta);
strupr(resposta);
printf("%s",resposta);
	
}
