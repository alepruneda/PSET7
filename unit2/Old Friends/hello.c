#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    // Que despues de ./hello solo sea un nombre 
    if (argc != 2)
    {
        // Si se cumple lo de arriba pasa esto:
        printf("Usage: ./hello <name>\n");
        return 1;
    }
// Lo que esta en [] es la casilla que se imprime
    string nombre = argv[1];
    printf("hello, %s\n", nombre);
    return 0;
}