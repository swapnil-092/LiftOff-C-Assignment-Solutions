#include <stdio.h>

int sum(int arr[],int n)
{
    int i=0,sum=0;

    for (i = 0; i < n; i++) 
    { 
      
        if (arr[i] % 2 == 0 || i%2 == 0) 
        {      
            sum += arr[i]; 
        }
        
    } 
    
    return sum; 
}
int main()
{
    int arr[] = {8,2,3,5,5}; 
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printf("Sum of all the even elements and even position elements %d ", sum(arr,n));
    
    return 0;
}
