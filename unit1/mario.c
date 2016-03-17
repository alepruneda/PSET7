#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Variables
    int altura;
    
    // Preguntar
    do 
    {
        printf("height:");
        altura = GetInt();
    }
    while (altura < 0 || altura > 23 );
    
    // Imprimir renglones
    for (int i = 0; i < altura; i++)
    {
        // Gatos
        for(int j = 0; j < (altura - 1 - i) ; j++)
        {
            printf(" ");
        }
        
        // Espacios 
        for(int k = 0; k < (i + 2); k++)
        {
            printf("#");
           }
        printf("\n");
    }
 
}