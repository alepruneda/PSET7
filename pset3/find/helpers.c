/**
 * helpers.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Helper functions for Problem Set 3.
 */
       
#include <cs50.h>

#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    // TODO: implenentar busqueda de algoritmos
   // Variables para buscar numeros binarios
    int inicia = 0;
    int termina = n - 1;
    int enmedio;
   
    while (inicia <= termina)
    {
      // Encontrar el valor de mi variable de enmedio
        enmedio = (termina - inicia / 2);
        if (values[enmedio] > value)
        {
            termina = enmedio - 1;
        }
      else if (values[enmedio] < value)
        {
            inicia = enmedio + 1;
        }
      else
        {
            return true;  
      }
      
  }    
    return false; 
}


/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    int min;
    // TODO: implement an O(n^2) sorting algorithm
    for (int i = 0; i < (n - 1); i++)
    {
        min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (values[j] < values[min])
            {
                min = j;
            }    
        }
        // Swap
        if (min != 1)
        {
            int temp = values[i];
            values[i] = values[min];
            values[min] = temp;
        }    
    }
    return;
}