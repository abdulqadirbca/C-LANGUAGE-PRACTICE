#include <stdio.h>
void lowercasealphabets()
{
  for (int c = 97; c <= 122; c++)
  {
    printf("%c ", c);
  }
  printf("\n");
}
void uppercasealphabets()
{
  for (int c = 65; c <= 90; c++)
  {
    printf("%c ", c);
  }
  printf("\n");
}
int main()
{
  char choice;
  printf("enter'u' for upper case, enter 'l' for lower case");
  scanf("%c ", &choice);
  if (choice == 'l' || choice == 'L')
  {

    printf(" lower case alphabets\n");
    lowercasealphabets();
  }
  else if (choice == 'U' || choice == 'u')
  {
    printf("upper case alphabets\n");
    uppercasealphabets();
  }
  else
  {
    printf("invalid input");
  }
  return 0;
}
