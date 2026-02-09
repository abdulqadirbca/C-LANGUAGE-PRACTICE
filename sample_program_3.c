#include <stdio.h>
#include <math.h>
int main (){
int a ; //creat variable
printf("enter number: "); // one number input from the user
scanf("%d",&a);
if(a>0){ // if else logic
    printf("positive number");
} else if(a<0){
    printf("negative number");
} else {
    printf("zero");
}
    return 0;
}
