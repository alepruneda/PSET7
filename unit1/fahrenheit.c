#include <stdio.h>
#include <cs50.h>

   int main(void)
{
    // Pedir los datos
    printf("C = ");
    float numero1 = GetFloat();
    
    // Calcular el resultado
    float fahrenheit = ((numero1 * 9) / 5) + 32;
    printf("F: %.1f \n", fahrenheit);
}