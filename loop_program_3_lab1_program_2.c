#include <stdio.h>
int main()
{
  int number_of_terms, i; // descriptive variable
  float x_value,current_term,total_sum;
  // input from user
  printf("enter terms: ");
  scanf("%d", &number_of_terms);
  printf("enter value of x ");
  scanf("%f",&x_value);
  current_term=x_value;
  total_sum=x_value;
  printf("enter number_of_terms: ");
  for (i = 1; i < number_of_terms; i++) // for loop logic
  {
   current_term= current_term * (-1*x_value*x_value);
   total_sum = total_sum+current_term;
  }
  printf("\nsum of the series is %f\n", total_sum);
  return 0;
}
