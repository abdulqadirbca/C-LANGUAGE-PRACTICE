#include <stdio.h>
int main()
{
  int number, original_num, modular, reverst_num = 0; // descriptive variable
  // input from user
  printf("enter number: ");
  scanf("%d", &number);
  original_num = number;
  while (number != 0) // while loop logic
  {
    modular = number % 10;
    reverst_num = reverst_num * 10 + modular;
    number = number / 10;
  }
  if (original_num == reverst_num)
  {
    printf(" palindrom %d", original_num);
  }
  else
  {
    printf("not palindrom %d", original_num);
  }
  return 0;
}
