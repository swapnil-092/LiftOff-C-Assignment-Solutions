#include<stdio.h>

int reverse(int num)
{

    int rem;

static int sum=0;

    if(num!=0)
    {

         rem=num%10;

         sum=sum*10+rem;

         reverse(num/10);

    }

    return(sum);

}

int main(){

    int n,sum;

    printf("Enter a number: ");

    scanf("%d",&n);

    sum = reverse(n);

    if(n==sum)

         printf("The given number  %d is a palindrome",n);

    else

        printf("The given number  %d is not a palindrome",n);

    return 0;

}

