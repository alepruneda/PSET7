/**
 * recover.c
 *
 * Computer Science 50
 * Problem Set 4 
 *
 * Recovers JPEGs from a forensic image.
 */
#include <stdio.h>
#include <stdlib.h>

#define BLOCKSIZE 512
typedef unsigned char BYTE;

int main(int argc, char* argv[])
{
    // Open file
    FILE* file = fopen("card.raw", "r");
    
    // Can't open file 
    if (file == NULL)
    {
        printf("Could not open the file\n");
        return 1;
    }

    BYTE buffer[BLOCKSIZE];
    // Contador de archivos 
    int conta = 0;
    FILE * jpg = NULL;
    char tit[8];
    // empieza ciclo para buscar ums magicos
    while(fread(&buffer,1, BLOCKSIZE, file) == BLOCKSIZE)
    {
        if (buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff)
        {
            if (jpg)
            {
              // Cerrar, para la otra
                fclose(jpg);
            }
          // Muestra valores
            sprintf(tit, "%03d.jpg" , conta);
            jpg = fopen (tit, "a");
          // Contador = contar imagenes
            conta++;
    }
        if (jpg)
        {
            fwrite(buffer, 1, BLOCKSIZE, jpg);
        }
    }
}