#include <stdio.h>
int main()
{
  int number_of_terms, i; // descriptive variable
  int current_square;
  long int total_sum = 0;
  // input from user
  printf("enter terms: ");
  scanf("%d", &number_of_terms);
  printf("the square natural numbers are: ");
  for (i = 1; i <= number_of_terms; i++) // for loop logic
  {
    current_square = i * i;
    printf("%d ", current_square);
    total_sum = total_sum + current_square;
  }
  printf("\nnumber of terms %d total sum of terms %ld\n", number_of_terms, total_sum);
  return 0;
}
