#include <stdio.h>
int main()
{
  int number_of_rows, i, space, star; // descriptive variable
  // input from user
  printf("enter number of rows: ");
  scanf("%d", &number_of_rows);
  for (i = 1; i <= number_of_rows; i++)//nested loop logic
  {
    for (space = 1; space <= (number_of_rows - i); space++)
    {
      printf(" ");
    }
    for (star = 1; star <= (2 * i - 1); star++)
    {
      printf("*");
    }
    printf("\n");
  }
  return 0;
}
