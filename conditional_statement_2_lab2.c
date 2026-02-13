#include <stdio.h>
int main()
{
    int mathematics, physics, chemistry, sum; // creat variable
    printf("enter number: ");                 // input from user
    scanf("%d %d %d", &mathematics, &physics, &chemistry);
    sum = mathematics + physics + chemistry;
    printf("sum= %d\n", sum);
    if (mathematics >= 50 && physics >= 45 && chemistry >= 60 && (sum >= 170 || mathematics + physics >= 120))
    {
        printf("eligible for admission\n");
    }
    else
    {
        printf("not a valid for admission\n");
    }
    return 0;
}
