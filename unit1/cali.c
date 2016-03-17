#include <stdio.h>
#include <cs50.h>

   int main(void)
{
    int calif = GetInt();
    
    if(calif >= 90)
    {
        printf("A\n");
    }
    else if (calif >= 80)
    {
        printf("B\n");
    }
    else if (calif >= 70)
    {
        print("C\n");
    }
    else if (calif >= 60)
    {
        printf("F\n");
    }
}