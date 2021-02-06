#include <stdio.h>

int main()
{
    float r, d, c, a;
    printf("Enter the radius of the circle: \n");
    scanf("%f", &r);
    d = r * 2;
    c = 2 * 22 / 7 * r;
    a = 22 / 7 * r * r;
    printf("Diameter of the given circle: \n%f\n", d);
    printf("Circumference of the given circle: \n%f\n", c);
    printf("Area of the given circle: \n%f\n", a);
    return 0;
}
