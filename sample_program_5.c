#include <stdio.h>
#include <math.h>
int main (){
int age; //creat variable
printf("enter your age: "); // input from the user
scanf("%d",&age);
if(age>=18){ // if else logic
    printf("eligible\n"); //eligibily fo voting
} else {
    printf("not eligible\n");
}
    return 0;
}
