#include <stdio.h>
int main()
{
  int tablenum,i,limit;
  printf("enter number: "); // input from user
  scanf("%d",&limit);
  printf("multiplier table 1 to %d\n",limit);
  for (i = 1; i<=10; i++)                 //for loop concept
  { for(tablenum=1; tablenum<=limit; tablenum++)
    printf("%d x %d = %d\t",tablenum,i,tablenum*i);
    printf("\n");
  }
  return 0;
}
