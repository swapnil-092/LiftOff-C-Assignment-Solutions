#include <stdio.h>

int main()
{
    int p;
    printf("Enter the number of the pattern- ");
    scanf("%d",&p);

    for (int i = 1; i <= p; i++)
    {
        for (int j = 1; j <= p; j++)
        {
            if (i == j || j == (p - i + 1))
            {
                printf("*");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}