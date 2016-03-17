#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int numero1, numero2, resultado=0;
    char operador;
    
    printf("Primer numero: ");
    numero1 = GetInt();
    printf("Segundo numero: ");
    numero2 = GetInt();
    printf("Operador numero: ");
    operador = GetInt();
    
    switch (operador)
    {
        case '*':
             resultado = numero1 * numero2;
             break;
        case '/':
             resultado = numero1 / numero2;
             break;
        case '+':
             resultado = numero1 + numero2;
             break;
        case '-':
             resultado = numero1 - numero2;
             break;
        default:
             printf("Introduce un operador valido.....\n");
    }
    
    printf("El resultado es %d\n", resultado);
    
}