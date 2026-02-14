#include <stdio.h>
int main()
{
    char grade;
    int sub1, sub2, sub3, sum;
    float percentage;                     // creat variable
    printf("enter your subject marks: "); // input from user
    scanf("%d %d %d", &sub1, &sub2, &sub3);
    sum = sub1 + sub2 + sub3;
    percentage = sum / 3.0;
    printf("percentage= %.2f\n",percentage);
    if (percentage >= 60)
    {
        grade='a';
    }
    else if (percentage < 60 && percentage >= 48)
    {
        grade='b';
    }
    else if (percentage < 48 && percentage >= 33)
    {
        grade='c';
    }
    else
    {
        grade='d';
    }
    switch (grade)
    {
    case 'a':
        printf("excellent \n");
        break;
    case 'b':
        printf("good \n");
        break;
    case 'c':
        printf("normal \n");
        break;
    case 'd':
        printf("fail\n");
        break;
    default:
        printf("invalid \n");
    }
    return 0;
}
