#include <stdio.h>
#include <string.h>
int main()
{
  char answer[20] = " ";             // descriptive variable
  while (strcmp(answer, "yes") != 0) // while loop concept
  {
    printf("when is your brother throwing a party? (type 'yes' to agree): "); // input from user
    scanf("%s", answer);
  }
  printf("lets finally agree! lets party!\n");
  return 0;
}
