#include <stdio.h>
int main()
{
  int num,i,oddnumber,sum=0;
  printf("enter number: "); // input from user
  scanf("%d",&num);
  printf("odd numbers : \n");
  for (i = 1; i<=num; i++)                 //for loop concept
  { oddnumber=(2*i)-1;
    printf(" %d ",oddnumber);
  } sum=sum+oddnumber;
  printf("\n");
  printf("total terms= %d \n sum = %d",num,sum);
  return 0;
}
