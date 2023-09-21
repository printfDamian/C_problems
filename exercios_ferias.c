// By: Regis Rodman
#include <stdio.h>

void show( char *s );       // Prot�tipo da fun��o show( char *s )
int Dec( char ch );         // Prot�tipo da fun��o Dec( char ch ); Obs: Dec = Decimal

int main()
{
    char str[200];
    char * pv = &str[0];     // Ponteiro para o primeiro elemento de str[200]

    printf( "Entre com letras, x para encerrar\n" );
    while( 1 )
    {
        *pv = getchar();
        if( *pv == 'x' ) {
            show( str );
            break;
        } else {
            pv++;
        }
    }

return 0;
}

// Corpo da fun��o show( char *s )
void show( char *s )
{
    for( int u=0; s[u]!='\0'; u++ )
    {
        // S� "letras" mai�sculas ou min�sculas
        if( ( Dec(s[u]) >= 65 && Dec(s[u]) <= 90) || (Dec(s[u]) >= 97 && Dec(s[u]) <= 122) )
            printf( "%c ", s[u] == 'x' ? ' ' : s[u] );
    }
putchar( '\n' );
}

// Corpo da fun��o Dec( char ch )
int Dec( char ch )
{
    // Retorna o valor decimal do caracter. Tabela ASCII.
    return "%d", ch;
}
