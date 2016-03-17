#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Pedir los datos
    printf("escribe el primer numero: ");
    float numero1= GetFloat();
    
    //  Calcular la multiplicacion y mostrarla 
    float F = ((numero1 * 9) / 5) + 32;
    printf("El resultado de la suma es: %f \n", F);
}