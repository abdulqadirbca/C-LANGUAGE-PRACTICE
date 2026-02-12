#include <stdio.h>
#include <math.h>
int main()
{
    float da, hra, basic_pay, pf, gross_salary; // creat variable
    printf("enter income: ");                   // input from user
    scanf("%f", &basic_pay);
    if (basic_pay < 5000)
    {
        da = basic_pay * 0.30; // if-else logic
        printf("da= %f\n", da);
    }
    else
    {
        da = basic_pay * 0.45;
        printf("da= %.2f\n", da);
    }
    hra = basic_pay * 0.15;
    printf("hra= %.2f\n", hra);
    pf = basic_pay * 0.12;
    printf("pf= %.2f\n", pf);

    gross_salary = basic_pay + da + hra - pf;
    printf("gross_salary= %.2f\n", gross_salary);
    printf("\ntotal= %f %f %f %f\n", gross_salary, da, hra, pf);

    return 0;
}
