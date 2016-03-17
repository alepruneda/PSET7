#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    // Pedir Variables
    int dias;
    int pennies_i;
   
   // Solo poner dias del 28 al 31
    do
    {
        printf("Cuantos dias tiene el mes?\n");
        dias = GetInt();
   }
   while (dias < 28 || dias > 31);
   
   // resultado
    long long pennies_f = 0;
   
    do
    {
        printf("cuantos pennies te dieron en tu primer dia?\n ");
        pennies_i = GetInt();
   }
   while (pennies_i <= 0);
   
   
   // Final 
    for (int i = 0; i < dias; i++)
    {
      // Al dia anterior le SUMAMOS lo de hoy
        pennies_f += (pennies_i * pow(2,i));
   }
   
    printf("$%.2f\n",pennies_f / 100.0);
   
}