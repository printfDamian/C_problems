#include <stdio.h>

 main()
{
    int num1, num2, sum, sub, mult;

    printf("Digite o primeiro numero: " );
    scanf("%d", &num1);

    printf("Digite o segundo numero: " );
    scanf("%d", &num2);

    //Soma
    sum = num1 + num2;

    //Subtração
    sub = num1 - num2;

    //Multiplicaçao
    mult = num1 * num2;

    
  

    printf("%d + %d = %d\n", num1, num2, sum);
    printf("%d - %d = %d\n", num1, num2, sub);
    printf("%d * %d = %d\n", num1, num2, mult);
   
}
