#include <stdio.h>
#include <string.h>
int main()
{
  char answer[10]; // descriptive variable
  do
  {
    printf("when are your brother throwing a party?(type 'yes' to agree): "); // input from user
    scanf("%s", answer);
  } while (strcmp(answer, "yes") != 0); // do while loop concept
  printf("lets finally agree! lets party! \n ");
  return 0;
}
