#include <stdio.h>
int main()
{
  int number, cube, i;
  float average;
  printf("enter number ");
  scanf("%d",&number);
  for (i = 1; i <= number; i++)
  {  cube=i*i*i;
    printf("number= %d cube=%d\n",i,cube);
  }
  return 0;
}
