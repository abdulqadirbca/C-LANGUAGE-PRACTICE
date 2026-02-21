#include <stdio.h>
int main()
{
  int num, i, sum = 0;       // descriptive variable
  printf("enter numbers= "); // input from user
  scanf("%d", &num);
  for (i = 1; i <= num; i++) // for loop concept
  {
    int even_num = 2 * i;
    printf(" %d ", even_num);
    sum = sum + even_num;
  }
  printf("\n sum of the first %d even numbers is %d\n", num, sum);

  return 0;
}
