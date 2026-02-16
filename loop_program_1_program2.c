#include <stdio.h>
int main()
{
  int n, i, sum = 0;       // creat variable
  printf("enter number "); // input from user
  scanf("%d", &n);
  for (i = 1; i <= n; i++)
  { printf("i = %d\n",i);
    sum = sum + i;
  }
  printf("sum of natural number= %d\n", sum);
  return 0;
}
