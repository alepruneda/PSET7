#include <stdio.h>
#include <cs50.h>

   int main(void)
{
    int numero = GetInt();
    
    if(numero % 2 == 0)
    {
        printf("Es par!\n");
    }
    else
    {
        printf("Es non...\n");
    }
}