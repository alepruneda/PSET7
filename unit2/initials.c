#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    string nombre = GetString();
    
    printf("%c", toupper(nombre[0]));
    
    // Desarrollo de mi variable
    for (int i = 0, n = strlen(nombre); i < n; i++)
    {
        // Hacer que despues de un espacio se ponga la muyuscula
        if (nombre[i] == ' ' && nombre[i + 1] != '\0' )
        {
            // Imprimir las iniciales
            printf("%c", toupper(nombre[i + 1]));
            i++;

        }
    }
    printf("\n");
}