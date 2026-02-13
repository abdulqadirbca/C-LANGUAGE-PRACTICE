#include <stdio.h>
int main()
{
    char ch;                     // creat variable
    printf("enter character: "); // input from user
    scanf(" %c", &ch);
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        if ((ch == 'A' || ch == 'E') || (ch == 'O' || ch == 'U' || ch == 'I') || (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'))
        {
            printf("vowel\n");
        }
        else
        {
            printf("consonent\n");
        }
    }
    else
    {
        printf("not an alphabet\n");
    }
    return 0;
}
