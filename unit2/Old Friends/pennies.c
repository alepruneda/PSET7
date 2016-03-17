#include <cs50.h>
#include <math.h>
#include <stdio.h>

// Dedfinir las constantes
#define MAX_DAYS 31
#define MIN_DAYS 28

// Difrente a 3 por que ahora introduces primero los dias y despues los pennies 
int main(int argc, string argv[])
{
    if (argc != 3)
    {
        // Si se cumple se imprime los siguente:
        printf("Usage: ./pennies <days> <pennies>\n");
        return 1;
    }
    
    // Poner los dias del mes; pero solo [28, 31]
    int days = atoi(argv[1]);
    int pennies = atoi(argv[2]);
    
    if (days > MAX_DAYS || days < MIN_DAYS || pennies < 0)
    {
        printf("Verifica que los datos sean válidos!\n");
        return 1;
    }
    
    long long total = pennies;
    
    for(int i = 1; i < days; i++)
    {
        total += pennies * pow(2,i);
    }
    printf("$%.2f\n", ((double) total) / 100);
    
    return 0;
}