#include <stdio.h>
int main()
{
    int a,b,c; // creat variable
    printf("enter number: ");//input from user
    scanf("%d %d %d", &a,&b,&c);
    if (a==b&&a==c)
    {
        printf("equilateral triangule\n");
    }
    else if (a==c||a==b||b==c )
    {
        printf("isosceles triangle\n");
    } 
    else
    {
        printf("scalene triangle\n");
    }
    return 0;
}
