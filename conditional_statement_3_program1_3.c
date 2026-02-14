#include <stdio.h>
int main()
{
    int choice, c, d, moduler;
    float plus, minus, divide, multiply, a, b; // creat variable
    printf("1. plus\n");
    printf("2. minus\n");
    printf("3. divide\n");
    printf("4. multiply\n");
    printf("5. module\n");
    printf("enter your choice 1-5: "); // input from user
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("enter number: ");
        scanf("%f %f", &a, &b);
        plus = a + b;
        printf("plus= %f\n", plus);
        break;
    case 2:
        printf("enter number: ");
        scanf("%f %f", &a, &b);
        minus = a - b;
        printf("minus= %f\n", minus);
        break;
    case 3:
        printf("enter number ");
        scanf("%f %f", &a, &b);
        divide = a / b;
        printf("divide= %.2f\n", divide);
        break;
    case 4:
        printf("enter number ");
        scanf("%f %f", &a, &b);
        multiply = a * b;
        printf("multiply= %f\n", multiply);
    case 5:
        printf("enter number ");
        scanf("%d %d", &c, &d);
        moduler = c % d;
        printf("moduler= %d\n", moduler);
        break;
    default:
        printf("invalid choice\n");
    }
    return 0;
}
