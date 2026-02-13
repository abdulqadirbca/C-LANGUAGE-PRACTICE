#include <stdio.h>
int main()
{
    int choice;
    float b, l, r, s, area;        // creat variable
    printf("1. area of circlr\n"); 
    printf("2. area of rectangle\n");
    printf("3. area of square\n");
    printf("enter your choice 1-3: ");// input from user
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("enter radius: ");
        scanf("%f", &r);
        area = 3.14 * r * r;
        printf("area of circle= %.2f\n", area);
        break;
    case 2:
        printf("enter length and breath ");
        scanf("%f %f", &l, &b);
        area = l * b;
        printf("area of rectangle= %.2f\n", area);
        break;
    case 3:
        printf("enter square ");
        scanf("%f", &s);
        area = s * s;
        printf("area of square= %.2f\n", area);
        break;
    default:
        printf("invalid choice\n");
    }
    return 0;
}
