#include <stdio.h>
int main()
{
  int number_of_term, i; // descriptive variable
  float x_value, current_term = 1.0, sum_of_terms = 1.0;
  printf("enter of x value: "); // input from user
  scanf("%f", &x_value);
  printf("enter number of terms: ");
  scanf("%d", &number_of_term);
  for (i = 1; i < number_of_term; i++)
  {
    current_term = current_term * (-1 * x_value * x_value) / ((2 * i - 1) * (2 * i));
    sum_of_terms = sum_of_terms + current_term;
  }
  printf("total of terms = %f", sum_of_terms);
  return 0;
}
