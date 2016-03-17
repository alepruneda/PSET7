#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
#include <math.h>

int main(int argc, string argv[])
{
    // Poner cuatro argumentos
    if (argc != 4)
    {
        // Si se cumple, que imprima lo siguinte indicando lo que debe de poner
        printf("Usage: ./calc <numero1> <operador> <numero2>\n");
        return 1;
    }
    // Informacion que recibe, cambiar num a float y operador a char
    float numero1 = atof (argv[1]);
    float numero2 = atof (argv[3]);
    char operador = argv[2][0];
    int x;
    
        // Indicar todas las opciones de operadores que puede tener...
    
    switch (operador)
    {
        
        // Suma:
        case '+':
            printf("%f\n", numero1 + numero2);
            break;
        
        // Resta:
        case '-':
            printf("%f\n", numero1 - numero2);
            break;
        
        // Multiplicacion:
        case 'x':
            printf("%f\n", numero1 * numero2);
            break;
        
        // Division:
        case '/':
            printf("%f\n", numero1 / numero2);
            break;
        
        // Modulo:
        case '%':
            x = numero1 / numero2;
            printf("%f\n", numero1 - numero2 * x);
            break;
    
        // Si no usa alguno de los operadores anteriores... Aparecera esto:
        default:
            printf("Introduce un operador correcto!\n");
            return 1;
            break;
    
    }

}