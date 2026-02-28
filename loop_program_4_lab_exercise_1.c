#include <stdio.h>
int main()
{
  int number, original_num, reminder, result = 0; // descriptive variable
  // input from user
  printf("enter three digits integers: ");
  scanf("%d", &number);
  original_num = number;
  while (number != 0) // while loop logic
  {
    reminder = number % 10;
    result = result + (reminder * reminder * reminder);
    number = number / 10;}
    if (original_num == result)
    {
      printf("\n%d is an armsstrong number\n", original_num);
    }
    else
    {
      printf("%d is an not armstrong number\n", original_num);
    }
  
  return 0;
}
