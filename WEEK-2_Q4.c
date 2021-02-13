#include <stdio.h>
int main()
    {
    int a[50], size, i, max, min;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the %d elements of the array:\n", size);
    for(i = 0; i < size; i++)
    scanf("%d", &a[i]);

    max = a[0];
    for(i = 1; i < size; i++)
    {
        if(max < a[i])  
        {
            max = a[i]; 
        }
    }
    printf("The maximum element is: %d \n",max);

    min = a[0];  
    for(i = 1; i < size; i++) 
    { if(min>a[i])   
        {
            min = a[i];   
        }
    }
    printf("The minimum element is: %d", min);
    return 0;
    }
