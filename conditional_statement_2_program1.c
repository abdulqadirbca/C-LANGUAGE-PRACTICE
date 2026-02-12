#include <stdio.h>
#include <math.h>
int main()
{
    double a, b, c, root1, root2, realpart, imagpart, discriminant; // creat variable
    printf("enter value: ");                                        // input from user
    scanf("%lf %lf %lf", &a, &b, &c);
    discriminant = b * b - 4 * a * c;

    if (discriminant > 0)
    {
        root1 = (-b + sqrt(discriminant)) / (2 * a); // if-else logic
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("\nroot1= %lf root2= %lf\n", root1, root2);
    }
    else if (discriminant = 0)
    {
        root1 = root2 = -b /(2*a);
        printf("\nroot1=root2: %lf\n", root1);
    }
    else
    {
        realpart = -b /(2*a);
        imagpart = sqrt(-discriminant) / (2 * a);
        printf("realpart+imagpart: %lf %lf\n", realpart, imagpart);
        printf("realpart-imagpart: %lf %lf\n", realpart, imagpart);
    }

    return 0;
}
