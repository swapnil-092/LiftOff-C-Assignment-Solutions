#include<stdio.h>
int Fact(int n)
{
    int factorial=1;
    while (n>0)
    {
        factorial=factorial*n;
        n--;
    }
    printf("Factorial is %d",factorial);
    return factorial;
}
int main()
{
    int n;
    printf("Enter a number- \n");
    scanf("%d", &n);
    Fact(n);
    return 0;
}