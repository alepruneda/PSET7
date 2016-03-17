#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    // Para que solo se pueda poner un numero despues de ./fahrenheit
    if (argc != 2)
    {
        // Si se cumple lo de arriba se imprime lo siguiente:
        printf("Usage: ./fahrenheit <celsius>\n");
        return 1;
    }
    // La segunda palabra [1] es = a Celsius
    float celsius = atof(argv[1]);
    
    // Hace la oprecaion y los guarda como fahrenheit
    float fahrenheit = (celsius * 9) / 5 + 32;
    printf("F: %.1f\n", fahrenheit);
}