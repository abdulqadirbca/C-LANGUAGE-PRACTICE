#include <stdio.h>
#include <math.h>
int main (){
int x,y; //creat variable
printf("enter number: ");//input from user
scanf("%d %d",&x,&y);
if(x>0&&y>0){ 
    printf("first quadrant");}
else if(x<0&&y<0){
    printf("second quadrant");
} else if(x<0&&y<0) {
    printf("third quadrant");
} else if(x>0&&y<0){
    printf("fourth quadrant");
}
    return 0;
}
