#include <stdio.h>
#include <math.h>
int main (){
int a , b, c;
printf("enter sides: ");
scanf("%d %d %d",&a ,&b ,&c);
if(a==b && b==c){
 printf("equilateral\n");
} else if(a==b||b==c||a==c){
    printf("isosceles\n");
} else {
    printf("scalene\n");
}
    return 0;
}
