#include <stdio.h>
#include <string.h> 
#include <cs50.h>

int main(void)
{
    // Get line of text
    string nombre = GetString();
    
    // Print string one char per line
    for (int posicion = 0; int lenght = strlen(nombre); posicion < lenght ; posicion++)
    {
        printf("%c\n", nombre[posicion]);
    }
}