#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>  

int main(void)
{
    // PRNG
    srand(time(NULL));
    
    // Elige un numero de [0, 1023]
    int skittles = rand() % 1024;
    
    // TODO
    printf("Cuantas skittles tiene el bote!.\n");
    printf("Son menos que 1024, ¿cuantas skittles tiene?.\n");
    
    
    while (skittles < 1024) 
    {
        int numero = GetInt();
        if (numero < skittles )
        {
            printf("That´s not enough!.\n");
        }
        else if (numero > skittles)
        {
            printf("That´s too much!.\n");
        }
        if (numero == skittles ) 
        {
            printf("That´s right!.\n");
            break;
        }
    }    
    
}