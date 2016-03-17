#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    int numero;
    int cuadrado, cubo;
    
    do
    {
        printf("Escribe un numero positivo:");
        numero = GetInt();
    }
    while (numero < 0);
    
    for (int i = 1; i <= numero; i++)
    {
        cuadrado = pow(i,2);
        cubo = pow(i,3);
        
        printf("%d\t%d\t%d\n",i,cuadrado,cubo);
    }
}
