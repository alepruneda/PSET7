#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>

// Prototipos 
float interesAnual(float monto, float interes);

int main(void)
{
    printf("Monto: ");
    float dinero = GetFloat();
    
    printf("Interes: ");
    float tasa = GetFloat();
    
    float monto_final = interesAnual(dinero, tasa);
    
    printf("La ganancia fue de: $%.2f" ,monto_final);
}

float interesAnual(float monto, float interes)
{
    float ganancia = monto * interes;
    return monto + ganancia;
}