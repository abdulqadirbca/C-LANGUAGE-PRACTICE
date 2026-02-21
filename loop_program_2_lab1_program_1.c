#include <stdio.h>
int main()
{
  int rows = 4, i, j;         // descriptive variable
  for (i = 1; i <= rows; i++) // nested for loop concept
  {
    for (j = 1; j <= i; j++)
    {
      printf(" %d ", j);
    }
    printf("\n");
  }
  return 0;
}
