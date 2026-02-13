#include <stdio.h>
int main()
{
    char ch;                     // creat variable
    printf("enter character: "); // input from user
    scanf(" %c", &ch);
    if((ch >= 'a' && ch <= 'z')||(ch>='A'&&ch<='Z'))
    {
        printf("alphabet\n");
    }
    else if (ch >= '0' && ch <= '9')
    {
        printf("digit\n");
    }
    else
    {
        printf("special character");
    }
    return 0;
}
