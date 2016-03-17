#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Variables
    long long  isbn;
    int digito;
    int total = 0;
    
    // Que poner
    printf("Introduce un ISBN: \n");
    isbn = GetLongLong ();
    
    // Operacion
    for (int i=10; i > 0; i--) 
    {
        digito = isbn % 10;
        isbn = isbn / 10;
        total += digito * i;
    }
    
    // Resultado
    if (total % 11 == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

}
