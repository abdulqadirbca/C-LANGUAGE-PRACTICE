#include <stdio.h>
int main()
{
  int number_of_terms, i; // descriptive variable
  long int current_term = 9;
  long int total_sum = 0;
  // input from user
  printf("enter terms: ");
  scanf("%d", &number_of_terms);
  printf("enter number of terms: ");
  for (i = 1; i <= number_of_terms; i++) // for loop logic
  {
    printf("%ld ", current_term);
    total_sum = total_sum + current_term;
    current_term = (current_term * 10) + 9;
  }
  printf("\nsum of the series is %ld\n", total_sum);
  return 0;
}
