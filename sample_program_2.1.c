#include <stdio.h>
#include <math.h>
int main (){
int m,n; //creat variable
printf("enter numbers: ");//input from user
scanf("%d",&m);
if(m>0){ 
    n=1;
} else if(m==0){
    n=0;
} else if(m<0){
    n=-1;
}
printf("value of n: %d",n);
    return 0;
}
