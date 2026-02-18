#include <stdio.h>
int main()
{
  int number, sum = 0, i;
  float average;
  printf("enter 10 numbers ");
  for (i = 1; i <= 10; i++)
  {
    printf("number= %d\n", i);
    scanf("%d",&number);
    sum = sum + number;
  }
  average = sum / 10.0;
  printf("sum= %d\n", sum);
  printf("average= %f\n", average);
  return 0;
}
