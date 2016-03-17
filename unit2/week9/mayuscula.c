#include <stdio.h>
#include <stdlib.h> 
#include <cs50.h>
#include <string.h>

int main(void)
{
    printf("Escribe tu nombre: ");
    string nombre = GetString();
    
    for (int i = 0, lenght = strien(nombre); posicion < lenght; posicion++)
    {
        if (nombre[posicion] >= 'a' && nombre[posicion] <= 'z' )
        nombre[posicion] = nombre[posicion] - 32;
    }
    printf("%s", nombre);
}