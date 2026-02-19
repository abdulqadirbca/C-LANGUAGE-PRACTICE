#include <stdio.h>
int main()
{
  char i;
  printf("alphabets A to Z: \n");
  for (i = 65; i <= 90; i++)
  {
    printf(" %c ", i);
  }
  printf("\n alphabets Z to A: \n");
  for (i = 90; i >= 65; i--)
  {
    printf(" %c ", i);
  }
  return 0;
}
