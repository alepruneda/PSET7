#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

int main(int argc, string argv[])
{ 
// Variables  
    bool correct = false; 
    int key = 0; 
    int input_length = 0; 
    string text = ""; 
      
     // Indicar cuantos argumentos y lo que pasa sino son los correctos  
    do 
    { 
         // Arfumentos permitidos 
        if (argc != 2) 
        { 
            printf("Usage: ./caesar <key>.\n"); 
            return 1; 
         } 
         else 
        { 
             // Cambiar de string a int  
            key = atoi(argv[1]); 
            correct = true; 
         } 
         
     } while(!correct); 
      
     // Formula para las letras
    text = GetString(); 
    input_length = strlen(text); 
    for(int i = 0; i < input_length; i++) 
    { 
         // Proceso de caracteres  
        if (isalpha(text[i])) 
        { 
             // Uso de caracteres en minusculas
            if (islower(text[i])) 
            { 
                printf("%c", ((((text[i] - 97) + key) % 26) + 97)); 
            } 
             // Uso de caracteres en mayusculas 
             else 
            { 
                printf("%c", ((((text[i] - 65) + key) % 26) + 65)); 
             } 
         } 
         // Reflejo despues de escribir  
         else 
        { 
            printf("%c", text[i]); 
         } 
     } 
     // Espacio despues del resultado que te da   
    printf("\n"); 
    return 0;   
 } 

