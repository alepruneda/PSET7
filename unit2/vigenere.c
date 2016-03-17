#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

int main(int argc, string argv[])
{
    // Argumentos que puedo utilizar 
    if (argc != 2)
    // Si pone mas argumentos, poner esto: 
    {
        printf("Usage: ./vigenere <key>.\n");
        return 1;
    }    
    string key = argv[1];
    int key_l = strlen(argv[1]);
    
    // Que sean letras 
    for (int i = 0; i < key_l; i++)
    {
        if (!isalpha(key[i]))
        // De lo contrario
        {
            printf("Por favor que sea una letra \n");
            return 1;
        }
        key[i] = toupper(key[i]);
    }
    
    string secretext = GetString();
    int keyC;
    int j = 0;
    
    // Encriptar
    for (int i = 0; i < strlen(secretext); i++)
    {
        if (isalpha(secretext[i]))
        {
            
            keyC = key[j % key_l] - 'A';
            // Mayusculas
            if (isupper(secretext[i]))
            {  
                printf("%c", (secretext[i] - 'A' + keyC) % 26 + 'A');
            }
            // Minusculas
            else
            {
                printf("%c", (secretext[i] - 'a' + keyC) % 26 + 'a');   
            }
            j++;
        }
        // sino era alfabetico que se imprima lo mismo
        else 
        {
            printf("%c", secretext[i]);
        }
    }
    // Salto de linea al terminar 
    printf("\n");
    return 0;
}
