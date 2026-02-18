#include <stdio.h>
int main()
{
  int number, multiply, i;
  printf("enter number ");
  scanf("%d", &number);
  for (i = 1; i <= 10; i++)
  {
    multiply = i * number;
    printf("%d x %d = %d \n", number, i, multiply);
  }
  return 0;
}
