#include <stdio.h>
int main()
{
  int num, i;
  long long factorial = 1;   // descriptive variable
  printf("enter numbers= "); // input from user
  scanf("%d", &num);
  for (i = 1; i <= num; i++) // nested for loop concept
  {
    factorial = factorial * i;
  }
  printf("the factorial of %d is %lld\n", num, factorial);
  return 0;
}
