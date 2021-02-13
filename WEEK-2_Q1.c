#include <stdio.h>

int main()
{
  int N, Rem, Sum=0;

  printf("Please Enter any number: \n");
  scanf("%d", &N);

  while(N > 0)
  {
     Rem = N % 10;
     Sum = Sum+ Rem;
     N = N / 10;
  }

  printf("Sum of the digits of Given Number = %d", Sum);

  return 0;
}