#include <stdio.h>

int main()
{
    float Tc, Tf;
    printf("Enter the temperature(C): \n");
    scanf("%f", &Tc);
    Tf = (Tc * 9 / 5) + 32;
    printf("The temperature in farenheit: \n%f", Tf);
    return 0;
}
