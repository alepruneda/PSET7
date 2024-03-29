/**
 * generate.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Generates pseudorandom numbers in [0,LIMIT), one per line.
 *
 * Usage: generate n [s]
 *
 * where n is number of pseudorandom numbers to print
 * and s is an optional seed
 */
 
#define _XOPEN_SOURCE

#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// constant
#define LIMIT 65536

int 
main(int argc, char *argv[])
{
    // Si no hay dos o tres argumentos
    if (argc != 2 && argc != 3)
    {
        printf("Usage: generate n [s]\n");
        return 1;
    }

    // Convierte ascii a valores
    int n = atoi(argv[1]);

    // Si hay tres argumentos convierte el tercero
    if (argc == 3)
    {
        srand((unsigned int) atoi(argv[2]));
    }
    else
    {
        srand((unsigned int) time(NULL));
    }

    // Crea numeros aleatorio n numero de veces 
    for (int i = 0; i < n; i++)
    {
        printf("%i\n", (int) (rand() % LIMIT));
    }

    // success
    return 0;
}