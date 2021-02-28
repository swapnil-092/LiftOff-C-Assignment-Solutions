#include<stdio.h>

int fact(int n)
{
    if (n==0)
    {
        return 1;
    }

    return fact(n-1)*n;
    
}

int main()
{
   int a,n;
   printf("Enter a number- \n");
   scanf("%d",&n);
   a=fact(n);
   printf("Factorial is %d",a);
   return 0;
}