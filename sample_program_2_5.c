#include <stdio.h>
#include <math.h>
int main (){
int math,physics,chemistry,total; //creat variable
printf("enter number: ");//input from user
scanf("%d %d %d",&math,&physics,&chemistry); 
total=math+chemistry+physics;
if (math>=60 && chemistry>=30 && physics>=50 && total>=140){
    printf("eligible for admission\n");
}
    else{
         printf("not eligible\n");}
    return 0;
}
