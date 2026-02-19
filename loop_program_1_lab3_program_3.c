#include <stdio.h>
int main()
{
  int totalrow, row, column; // descriptive variable
  printf("enter rows: ");    // input from user
  scanf("%d", &totalrow);
  for (row = 1; row <= totalrow; row++) // nested for loop concept
  {
    for (column = 1; column <= row; column++)
    {
      printf("* ");
    }
    printf("\n");
  }

  return 0;
}
