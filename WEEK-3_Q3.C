#include <stdio.h>

int hcf(int a,int b) {
  if (b == 0)
  {
    return a;
  }
  else
  {
    return hcf(b, a % b);
  }
}

int main()
{
  int num1, num2, gcd, lcm;
  printf("Enter two numbers:\n");
  scanf("%d%d", &num1, &num2);

  gcd = hcf(num1, num2);
  lcm = (num1*num2)/gcd;

  printf("HCF of %d and %d = %d\n", num1, num2, gcd);
  printf("LCM of %d and %d = %d\n", num1, num2, lcm);

  return 0;
}

