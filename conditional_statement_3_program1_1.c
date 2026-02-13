#include <stdio.h>
int main()
{
    int month;                // creat variable
    printf("enter month number: "); // input from user
    scanf("%d", &month);
    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("31 day\n");
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        printf("30 days\n");
        break;
    case 2:
        printf("28 or 29\n");
        break;
    default:
        printf("invalid month");
    }
    return 0;
}
