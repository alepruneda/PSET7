#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    int days, pennies_ini;
    
    // Solo puede poner de 28 a 31 dias al mes
    do
    {
        printf("¿Cuantos dias tiene el mes? "); 
        days = GetInt();
    }
    while (days <28 || days >31);
    
    long long pennies_final = 0;
    do
    {
        printf("¿Cuantos pennies te dan en tu primer dia? ");
        pennies_ini = GetInt();
    }
    while (pennies_ini <=0);
    
    for (int i= 0; i< days; i++)
    {
        // Al dia anterior le SUMAMOS lo de hoy
        pennies_final += (pennies_ini * pow(2,i)); 
    }
    
    printf("$%.2f\n",pennies_final / 100.0);
    
}

printf("$%.2f\n",pennies_f / 100.0);