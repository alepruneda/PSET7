#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    // primera parte ERRORES
    // checar que introduzcan los argumentos validos, sino generar error
    if (argc != 2)
    {
        printf("usage: ./vigenere <key>.\n");
        return 1;
    }
    string key = argv[1];
    int lenght_key = strlen(argv[1]);
    
    // checar que sean caracteres alfabeticos
    for (int i = 0; i < lenght_key; i++)
    {
        if (!isalpha(key[i]))
        {
            printf("Please enter an alphabethic character\n");
            return 1;
        }
        key[i] = toupper(key[i]);
    }
    
    string secretext = GetString();
    int key_co;
    int j = 0;
    
    // empezar a encriptar el mensaje
    for (int i = 0; i < strlen(secretext); i++)
    {
        if (isalpha(secretext[i]))
        {
            
            key_co = key[j % lenght_key] - 'A';
            // para las que sean MAYUSCULAS
            if (isupper(secretext[i]))
            {  
                printf("%c", (secretext[i] - 'A' + key_co) % 26 + 'A');
            }
            // para las que sean MINUSCULAS
            else
            {
                printf("%c", (secretext[i] - 'a' + key_co) % 26 + 'a');   
            }
            j++;
        }
        // sino era alfabetico que se imprima lo mismo
        else 
        {
            printf("%c", secretext[i]);
        }
    }
    // imprimir un salto de linea y regresar cero si no hubo errores
    printf("\n");
    return 0;
    
}

