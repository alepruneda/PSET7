#define _XOPEN_SOURCE

#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LIMIT 65536

int main(int argc, string argv[])
{
    // Que sean 3 ó 4 argumentos
    if (argc < 3 || argc > 4)
    {
        // De lo contrario imprimir esto 
        printf("usage: ./rng <num> <max> [seed] \n");
        return 1;
    }
    
    // Pasar la cantidad de numeros a enteros 
    // Numero maximo convertirlo (usuario lo introduce)
    int num = atoi(argv[1]);
    int max = atoi(argv[2]);
    
    // Que no se pase el numero maximo que esta permitido 
    if (max > LIMIT)
    {
        printf("No puedes pasar este numero: 65536\n");
        return 1;
    }
    
    // Semilla que el usuario intruduce
    if (argc == 4)
    {
        // Numero de la semilla cambiarlo a entero 
        srand48(atoi(argv[3]));    
    }
    // Si el usuario decide no introducir una semilla trabajar con un null
    else
    {
        srand48(time(NULL));    
    }
    
    // Contador imprime numeros random 
    for(int i = 0; i < num; i++)
    {
        printf("Random number #%d: %i\n", i, (int) (max * drand48()));   
    }
        
    return 0;
}