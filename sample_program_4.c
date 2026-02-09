#include <stdio.h>
#include <math.h>
int main (){
int a ; //creat variable
printf("enter year: "); // input from the user
scanf("%d",&a);
if(a%4==0){ // if else logic
    printf("leap year\n");
} else {
    printf("not a leap year\n");
}
    return 0;
}
