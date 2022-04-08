#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c,f;
    printf("Introduza uma temperatura em Fahrenheit: ");
    scanf("%d",&f);

    c=(5*(f-32)/9);
    printf("%d Fahrenheit = %d Celsius" ,f,c);
}
