#include <stdio.h>
#include <math.h>
int main (){
double a,b,c,root1,root2,discriminent,realpart,imagpart;
printf("enter a,b,c: ");
scanf("%lf %lf %lf",&a, &b, &c);
discriminent=b*b-4*a*c;
if(discriminent>0){
    root1=(-b+sqrt(discriminent))/(2*a);
    root2=(-b-sqrt(discriminent))/(2*a);
    printf("root1: %lf root2: %lf",root1,root2);
} else if(discriminent==0){
root1=root2=-b/(2*a);
printf("root1: %1f",root1);
} else {
    realpart= -b/(2*a);
    imagpart= sqrt(-discriminent)/(2*a);
    printf("root1: %f+%fi\n ",realpart,imagpart);
    printf("root2: %f-%fi\n",realpart,imagpart);
}
    return 0;
}
