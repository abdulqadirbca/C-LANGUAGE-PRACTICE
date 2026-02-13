#include <stdio.h>
int main()
{
    int number;               // creat variable
    printf("enter number: "); // input from user
    scanf("%d", &number);
    if ((number == 1))
    {
        printf("monday\n");
    }
    else if (number == 2)
    {
        printf("tuesday");
    }
    else if (number == 3)
    {
        printf("wednesday");
    }
    else if (number == 4)
    {
        printf("thurstday\n");
    }
    else if (number == 5)
    {
        printf("friday\n");
    }
    else if (number == 6)
    {
        printf("saturday\n");
    }
    else if (number == 7)
    {
        printf("sunday\n");
    }
    else
    {
        printf("invalid day");
    }
    return 0;
}
