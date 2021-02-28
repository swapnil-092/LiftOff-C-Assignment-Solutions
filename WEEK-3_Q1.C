#include <stdio.h>

int Square(int a)
{
    int sq;
    sq = a * a;
    printf("The square of the number is- %d", sq);
    return sq;
}
int main()
{
    int a;
    printf("Enter a number- \n");
    scanf("%d", &a);
    Square(a);
    return 0;
}