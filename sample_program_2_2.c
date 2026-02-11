#include <stdio.h>
#include <math.h>
int main (){
float h; //creat variable
printf("enter height: ");//input from user
scanf("%f",&h);
if(h>32.1){ 
    printf("largest height");
} else if(h==30.0){
    printf("medium height");
} else{
    printf("lowwest height");
}
    return 0;
}
