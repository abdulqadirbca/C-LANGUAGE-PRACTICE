#include <stdio.h>
int main()
{
    int a, b, c, sum;         // creat variable
    printf("enter number: "); // input from user
    scanf("%d %d %d", &a, &b, &c);
    sum = a + b + c;
    if (sum == 180 && a > 0 && b > 0 && c > 0)
    {
        printf("triangle\n");
    }
    else
    {
        printf("not a valid triangle\n");
    }
    return 0;
}
