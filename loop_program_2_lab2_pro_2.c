#include <stdio.h>
int main()
{
  int number_of_term, i; // descriptive variable
  float sum_of_terms = 0.0;
  // input from user
  printf("enter number of terms: ");
  scanf("%d", &number_of_term);
  for (i = 1; i <= number_of_term; i++)
  {
    printf(" 1/%d ", i);
    sum_of_terms = sum_of_terms + (1.0 / i);
    if (i < number_of_term)
    {
      printf("+ ");
    }
  }
  printf("\nsum of the harmonic series = %f\n", sum_of_terms);
  return 0;
}
