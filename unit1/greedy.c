#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    // Datos
    printf("How much change is owed?\n");
    float change = GetFloat();
    
    // Checar datos
    while (change <= 0)
    {
        printf("Introduce un numero positivo");
        change = GetFloat();
    }
    
    int cambio = round(change * 100);
    
    // Variables
    int coins = 0;
    
    // Valor de cada moneda
    while (cambio >= 25)
    {
        cambio -= 25;
        coins++;
    }
    // Dimes
    while(cambio >= 10)
    {
        cambio -= 10;
        coins++;
    }
    // Nickels
    while(cambio >= 5)
    {
        cambio -= 5;
        coins++;
    }
    // Pennies
    coins += cambio;
    
        
    
    // Resultado
    printf("%d\n",coins);
    
}