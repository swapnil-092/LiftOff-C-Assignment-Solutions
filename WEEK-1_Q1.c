#include <stdio.h>

int main()
{
    float a, b;
    printf("ENTER TWO NUMBERS TO PERFORM ARITHMETIC OPERATIONS: \n");
    scanf("%f %f", &a, &b);
    float sum = a + b;
    float diff = a - b;
    float multiply = a * b;
    float div = a / b;

    printf("Sum of two numbers: \n%f\n", sum);
    printf("Difference of two numbers: \n%f\n", diff);
    printf("Multiply of two numbers: \n%f\n", multiply);
    printf("Division of two numbers: \n%f\n", div);

    return 0;
}
